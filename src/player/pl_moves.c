/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:01:53 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:03:08 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	pl_move_up(t_mlx *var)
{
	var->player->pos_y -= 1;
	sp_player(var);
}

void	pl_move_down(t_mlx *var)
{
	var->player->pos_y += 1;
	sp_player(var);
}

void	pl_move_left(t_mlx *var)
{
	var->player->pos_x -= 1;
	sp_player(var);
}

void	pl_move_right(t_mlx *var)
{
	var->player->pos_x += 1;
	sp_player(var);
}
