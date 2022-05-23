/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:37:30 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:27:58 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_player(t_mlx *var)
{
	t_img	*img;
	char	*filepath;
	int		img_size;

	filepath = "assets/player/gold_chicken_idle_1.xpm";
	img_size = PXL_SIZE;
	img = mlx_xpm_file_to_image(var->mlx, filepath, &img_size, &img_size);
	mlx_put_image_to_window(var->mlx, var->win, img,
		var->player->pos_x * img_size,
		var->player->pos_y * img_size);
	free(img);
}
