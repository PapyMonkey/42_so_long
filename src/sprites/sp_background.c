/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_background.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:42:03 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:19:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_print_background(t_mlx *var)
{
	int	x;
	int	y;

	y = 0;
	while (y * PXL_SIZE < var->win_y)
	{
		x = 0;
		while (x * PXL_SIZE < var->win_x)
		{
			mlx_put_image_to_window(var->mlx, var->win,
				var->assets->img_background,
				x * PXL_SIZE, y * PXL_SIZE);
			x++;
		}
		y++;
	}
}
