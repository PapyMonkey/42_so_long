/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:25:45 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 17:58:39 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	err_load_assets(var);
}
