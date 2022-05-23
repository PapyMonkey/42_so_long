/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:56:31 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:44:33 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	sp_print_walls_extend(t_mlx *var, int x, int y)
{
	if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "ULR", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_ulr, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "UL", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_ul, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "UR", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_ur, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "U", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_u, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "LR", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_lr, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "L", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_l, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "R", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_r, x * PXL_SIZE, y * PXL_SIZE);
	else if (!ft_strncmp(p_neighbours(var, x, y, MAP_WALL), "S", 3))
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->walls->img_s, x * PXL_SIZE, y * PXL_SIZE);
}

void	sp_print_walls(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_WALL)
		sp_print_walls_extend(var, x, y);
}
