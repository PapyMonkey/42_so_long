/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:56:31 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:28:36 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_print_walls(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_WALL)
	{
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->img_wall,
			x * PXL_SIZE,
			y * PXL_SIZE);
	}
}
