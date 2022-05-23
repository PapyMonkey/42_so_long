/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:00:26 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:29:48 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	*img_create(t_mlx *var, int width, int height)
{
	t_img	*img;

	img = malloc(sizeof(t_img));
	if (!img)
		error_put_exit();
	img->img = mlx_new_image(var->mlx, width, height);
	img->addr = mlx_get_data_addr(img->img, &(img->bpp), &(img->line_len),
			&(img->endian));
	return (img);
}
