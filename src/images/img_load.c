/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:25:45 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:31:28 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_load(t_mlx *var)
{
	var->assets->img_background = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_background,
			&(var->assets->img_size),
			&(var->assets->img_size));
	var->assets->img_item = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_item,
			&(var->assets->img_size),
			&(var->assets->img_size));
	var->assets->img_player = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_player,
			&(var->assets->img_size),
			&(var->assets->img_size));
	var->assets->img_wall = mlx_xpm_file_to_image(var->mlx,
			var->assets->path_wall,
			&(var->assets->img_size),
			&(var->assets->img_size));
	err_load_assets(var);
}
