/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:25:45 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 00:22:55 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Load walls sprites XPM image in a t_walls structure.
 *
 * @param var Variable containing all the other useful ones.
 */
static void	img_load_walls(t_mlx *var)
{
	var->assets->walls->img_ulr = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_ulr,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_ul = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_ul,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_ur = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_ur,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_u = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_u,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_lr = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_lr,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_l = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_l,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_r = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_r,
			&(var->assets->img_size), &(var->assets->walls->img_size));
	var->assets->walls->img_s = mlx_xpm_file_to_image(var->mlx,
			var->assets->walls->path_s,
			&(var->assets->img_size), &(var->assets->walls->img_size));
}

/**
 * @brief Load count module sprites XPM image in a t_count structure.
 *
 * @param var Variable containing all the other useful ones.
 */
static void	img_load_count(void *mlx, t_count *count)
{
	count->img_bg = mlx_xpm_file_to_image(mlx, count->path_bg,
			&(count->size_img_bg_x), &(count->size_img_bg_y));
	count->img_0 = mlx_xpm_file_to_image(mlx, count->path_0,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_1 = mlx_xpm_file_to_image(mlx, count->path_1,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_2 = mlx_xpm_file_to_image(mlx, count->path_2,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_3 = mlx_xpm_file_to_image(mlx, count->path_3,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_4 = mlx_xpm_file_to_image(mlx, count->path_4,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_5 = mlx_xpm_file_to_image(mlx, count->path_5,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_6 = mlx_xpm_file_to_image(mlx, count->path_6,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_7 = mlx_xpm_file_to_image(mlx, count->path_7,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_8 = mlx_xpm_file_to_image(mlx, count->path_8,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
	count->img_9 = mlx_xpm_file_to_image(mlx, count->path_9,
			&(count->size_img_nb_x), &(count->size_img_nb_y));
}

void	img_load(t_mlx *var)
{
	var->assets->img_background = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_background,
			&(var->assets->img_size), &(var->assets->img_size));
	var->assets->img_item = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_item,
			&(var->assets->img_size), &(var->assets->img_size));
	var->assets->img_player = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_player,
			&(var->assets->img_size), &(var->assets->img_size));
	img_load_walls(var);
	img_load_count(var->mlx, var->assets->count);
	err_load_assets(var);
}
