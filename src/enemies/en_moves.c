/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   en_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 06:32:50 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/20 13:00:45 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	en_make_moves_l(t_mlx *var, t_pos *pos)
{
	if (var->map->array[pos->y][pos->x - 1] == MAP_START)
		en_loose(var);
	else if (var->map->array[pos->y][pos->x - 1] == MAP_EMPTY)
	{
		pos->img_current = var->enemies->img_left_1;
		var->map->array[pos->y][pos->x - 1] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->x = pos->x - 1;
	}
	else
	{
		pos->dir = 'R';
		pos->img_current = var->enemies->img_right_1;
		var->map->array[pos->y][pos->x + 1] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->x = pos->x + 1;
	}
}

static void	en_make_moves_r(t_mlx *var, t_pos *pos)
{
	if (var->map->array[pos->y][pos->x + 1] == MAP_START)
		en_loose(var);
	if (var->map->array[pos->y][pos->x + 1] == MAP_EMPTY)
	{
		pos->img_current = var->enemies->img_right_1;
		var->map->array[pos->y][pos->x + 1] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->x = pos->x + 1;
	}
	else
	{
		pos->dir = 'L';
		pos->img_current = var->enemies->img_left_1;
		var->map->array[pos->y][pos->x - 1] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->x = pos->x - 1;
	}
}

static void	en_make_moves_u(t_mlx *var, t_pos *pos)
{
	if (var->map->array[pos->y - 1][pos->x] == MAP_START)
		en_loose(var);
	if (var->map->array[pos->y - 1][pos->x] == MAP_EMPTY)
	{
		pos->img_current = var->enemies->img_up_1;
		var->map->array[pos->y - 1][pos->x] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->y = pos->y - 1;
	}
	else
	{
		pos->dir = 'D';
		pos->img_current = var->enemies->img_down_1;
		var->map->array[pos->y + 1][pos->x] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->y = pos->y + 1;
	}
}

static void	en_make_moves_d(t_mlx *var, t_pos *pos)
{
	if (var->map->array[pos->y + 1][pos->x] == MAP_START)
		en_loose(var);
	if (var->map->array[pos->y + 1][pos->x] == MAP_EMPTY)
	{
		pos->img_current = var->enemies->img_down_1;
		var->map->array[pos->y + 1][pos->x] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->y = pos->y + 1;
	}
	else
	{
		pos->dir = 'U';
		pos->img_current = var->enemies->img_up_1;
		var->map->array[pos->y - 1][pos->x] = MAP_HENEMY;
		var->map->array[pos->y][pos->x] = MAP_EMPTY;
		pos->y = pos->y - 1;
	}
}

void	en_moves(t_mlx *var)
{
	int	n;

	n = 0;
	while (var->enemies->pos[n] != NULL)
	{
		if (var->enemies->pos[n]->dir == 'L')
			en_make_moves_l(var, var->enemies->pos[n]);
		else if (var->enemies->pos[n]->dir == 'R')
			en_make_moves_r(var, var->enemies->pos[n]);
		else if (var->enemies->pos[n]->dir == 'U')
			en_make_moves_u(var, var->enemies->pos[n]);
		else if (var->enemies->pos[n]->dir == 'D')
			en_make_moves_d(var, var->enemies->pos[n]);
		n++;
	}
}
