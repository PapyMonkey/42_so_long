/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:55:19 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 13:43:36 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	if (pl_check_exit(var, x, y) && var->player->inventory == var->map->nb_item)
	{
		ft_printf("Et c'est la win! GG l'equipe. Maintenant go jouer a LoL.\n");
		var_free(var);
		exit(EXIT_SUCCESS);
	}
	else if (pl_check_items(var, x, y))
	{
		var->player->inventory++;
		return (1);
	}
	else if (!pl_check_walls(var, x, y))
		return (1);
	else
		return (0);
}
