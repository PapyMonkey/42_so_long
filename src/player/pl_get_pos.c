/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_get_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:51:35 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:29:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	pl_get_pos(t_player *player, t_mlx *var)
{
	int	x;
	int	y;

	y = 0;
	while (y < var->map->size_y)
	{
		x = 0;
		while (x < var->map->size_x)
		{
			if (var->map->array[y][x] == 'P')
			{
				player->pos_x = x;
				player->pos_y = y;
				return ;
			}
			x++;
		}
		y++;
	}
}
