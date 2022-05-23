/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:37:30 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:41:47 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_print_player(t_mlx *var)
{
	mlx_put_image_to_window(var->mlx, var->win,
		var->assets->img_player,
		var->player->pos_x * PXL_SIZE,
		(var->player->pos_y + 1) * PXL_SIZE);
}
