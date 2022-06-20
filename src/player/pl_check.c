/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:55:19 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/20 12:48:07 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	pl_check_enemies(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_HENEMY
		|| var->map->array[y][x] == MAP_VENEMY)
		return (1);
	else
		return (0);
}

int	pl_check_exit(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_EXIT)
		return (1);
	else
		return (0);
}

int	pl_check_items(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_ITEM)
		return (1);
	else
		return (0);
}

int	pl_check_walls(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_WALL)
		return (1);
	else
		return (0);
}

int	pl_check_main(t_mlx *var, int x, int y)
{
	if (pl_check_exit(var, x, y))
	{
		if (var->player->inventory == var->map->nb_item)
		{
			ft_printf("Et c'est la win! Maintenant go jouer a LoL.\n");
			var_free(var);
			exit(EXIT_SUCCESS);
		}
		else
			return (0);
	}
	else if (pl_check_items(var, x, y))
	{
		var->player->inventory++;
		return (1);
	}
	else if (!pl_check_walls(var, x, y) && !pl_check_enemies(var, x, y))
		return (1);
	else if (pl_check_enemies(var, x, y))
	{
		en_loose(var);
		return (0);
	}
	else
		return (0);
}
