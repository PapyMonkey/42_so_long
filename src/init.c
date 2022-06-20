/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 05:46:23 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/20 12:11:40 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	var_init(t_mlx *var, int argc, char **argv)
{
	var->assets = sp_init_assets();
	var->map = p_main(argc, argv);
	var->mlx = mlx_init();
	var->win_x = (var->map->size_x) * PXL_SIZE;
	var->win_y = (var->map->size_y + 2) * PXL_SIZE;
	var->idle_frames = FRAMES;
	var->win_name = "so_stardew";
	var->player = pl_init(var);
	if (var->map->nb_venemies || var->map->nb_henemies)
		var->enemies = en_init(var);
	img_load(var);
}
