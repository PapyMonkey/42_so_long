/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_background.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:42:03 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 04:37:15 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_background(t_mlx *var)
{
	t_img	*img_bg;
	char	*filepath;
	int		img_size;
	int		x;
	int		y;

	filepath = "assets/backgrounds/island_ground_1.xpm";
	img_size = PXL_SIZE;
	img_bg = mlx_xpm_file_to_image(var->mlx, filepath, &img_size, &img_size);
	y = 0;
	while (y < var->win_y)
	{
		x = 0;
		while (x < var->win_x)
		{
			mlx_put_image_to_window(var->mlx, var->win, img_bg, x, y);
			x += PXL_SIZE;
		}
		y += PXL_SIZE;
	}
	free(img_bg);
}
