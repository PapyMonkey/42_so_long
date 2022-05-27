/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:23:50 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 02:00:25 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	event_esc(int key, t_mlx *var)
{
	if (key == ESC_KEY)
	{
		mlx_clear_window(var->mlx, var->win);
		mlx_destroy_window(var->mlx, var->win);
		var_free(var);
		exit(EXIT_SUCCESS);
	}
}

static void	event_move_player(int key, t_mlx *var)
{
	if (key == W_KEY || key == UP_KEY)
		pl_move_up(var);
	else if (key == S_KEY || key == DOWN_KEY)
		pl_move_down(var);
	else if (key == A_KEY || key == LEFT_KEY)
		pl_move_left(var);
	else if (key == D_KEY || key == RIGHT_KEY)
		pl_move_right(var);
}

int	event_redcross(t_mlx *var)
{
	var_free(var);
	mlx_clear_window(var->mlx, var->win);
	mlx_destroy_window(var->mlx, var->win);
	exit(EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}

int	event_update(t_mlx *var)
{
	static int	idle_counter;

	idle_counter++;
	if (var->player->inventory == var->map->nb_item)
		var->assets->exit->img_current = var->assets->exit->img_awake;
	else if (idle_counter == var->idle_frames)
		var->assets->exit->img_current = var->assets->exit->img_idle_2;
	else if (idle_counter >= var->idle_frames * 2)
	{
		var->assets->exit->img_current = var->assets->exit->img_idle_1;
		idle_counter = 0;
	}
	img_draw(var);
	return (EXIT_SUCCESS);
}

int	event_main(int key, t_mlx *var)
{
	event_esc(key, var);
	event_move_player(key, var);
	return (EXIT_SUCCESS);
}
