/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:23:50 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:19:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	event_esc(int key, t_mlx *var)
{
	if (key == ESC_KEY)
	{
		mlx_clear_window(var->mlx, var->win);
		mlx_destroy_window(var->mlx, var->win);
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

int	event_main(int key, t_mlx *var)
{
	event_esc(key, var);
	event_move_player(key, var);
	return (EXIT_SUCCESS);
}
