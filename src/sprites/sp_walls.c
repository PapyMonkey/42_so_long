/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:56:31 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 13:45:35 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Check if the cursor's current position is on a wall. If so, print it.
 *
 * @param var Variable containing all the other useful ones.
 * @param img Variable containing the image to be printed.
 * @param x x position.
 * @param y y position.
 */
static void	sp_check_walls(t_mlx *var, t_img *img, int x, int y)
{
	if (var->map->array[y][x] == MAP_WALL)
	{
		mlx_put_image_to_window(var->mlx, var->win, img,
			x * PXL_SIZE, y * PXL_SIZE);
	}
}

void	sp_walls(t_mlx *var)
{
	t_img	*img;
	int		img_size;
	int		x;
	int		y;

	img_size = PXL_SIZE;
	img = mlx_xpm_file_to_image(var->mlx,
			var->assets->wall, &img_size, &img_size);
	y = 0;
	while (y < var->map->size_y)
	{
		x = 0;
		while (x < var->map->size_x)
		{
			sp_check_walls(var, img, x, y);
			x++;
		}
		y++;
	}
	free(img);
}
