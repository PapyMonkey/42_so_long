/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:01:53 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 00:36:36 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	pl_move_up(t_mlx *var)
{
	if (pl_check_main(var, var->player->pos_x, var->player->pos_y - 1))
	{
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_EMPTY;
		var->player->pos_y -= 1;
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_START;
		var->player->nb_moves++;
		img_draw(var);
	}
	if (DEBUG_MODE)
	{
		ft_printf("Player pos : [%d,%d]\n",
			var->player->pos_x, var->player->pos_y);
		ft_printf("Player inv : %d\n", var->player->inventory);
	}
}

void	pl_move_down(t_mlx *var)
{
	if (pl_check_main(var, var->player->pos_x, var->player->pos_y + 1))
	{
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_EMPTY;
		var->player->pos_y += 1;
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_START;
		var->player->nb_moves++;
		img_draw(var);
	}
	if (DEBUG_MODE)
	{
		ft_printf("Player pos : [%d,%d]\n",
			var->player->pos_x, var->player->pos_y);
		ft_printf("Player inv : %d\n", var->player->inventory);
	}
}

void	pl_move_left(t_mlx *var)
{
	if (pl_check_main(var, var->player->pos_x - 1, var->player->pos_y))
	{
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_EMPTY;
		var->player->pos_x -= 1;
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_START;
		var->player->nb_moves++;
		img_draw(var);
	}
	if (DEBUG_MODE)
	{
		ft_printf("Player pos : [%d,%d]\n",
			var->player->pos_x, var->player->pos_y);
		ft_printf("Player inv : %d\n", var->player->inventory);
	}
}

void	pl_move_right(t_mlx *var)
{
	if (pl_check_main(var, var->player->pos_x + 1, var->player->pos_y))
	{
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_EMPTY;
		var->player->pos_x += 1;
		var->map->array[var->player->pos_y][var->player->pos_x] = MAP_START;
		var->player->nb_moves++;
		img_draw(var);
	}
	if (DEBUG_MODE)
	{
		ft_printf("Player pos : [%d,%d]\n",
			var->player->pos_x, var->player->pos_y);
		ft_printf("Player inv : %d\n", var->player->inventory);
	}
}
