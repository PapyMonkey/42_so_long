/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_init_assets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:07:35 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/26 23:38:00 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Initialize all walls paths.
 *
 * @param assets Structure containing all the paths.
 */
static void	sp_init_walls(t_assets *assets)
{
	assets->walls->path_ulr = "assets/walls/fence_up_left_right.xpm";
	assets->walls->path_ul = "assets/walls/fence_up_left.xpm";
	assets->walls->path_ur = "assets/walls/fence_up_right.xpm";
	assets->walls->path_u = "assets/walls/fence_up.xpm";
	assets->walls->path_lr = "assets/walls/fence_left_right.xpm";
	assets->walls->path_l = "assets/walls/fence_left.xpm";
	assets->walls->path_r = "assets/walls/fence_right.xpm";
	assets->walls->path_s = "assets/walls/fence_solo.xpm";
	assets->walls->img_size = 2 * PXL_SIZE;
}

static void	sp_init_count(t_assets *assets)
{
	assets->count->path_bg = "assets/count/compteur.xpm";
	assets->count->path_0 = "assets/count/number_0.xpm";
	assets->count->path_1 = "assets/count/number_1.xpm";
	assets->count->path_2 = "assets/count/number_2.xpm";
	assets->count->path_3 = "assets/count/number_3.xpm";
	assets->count->path_4 = "assets/count/number_4.xpm";
	assets->count->path_5 = "assets/count/number_5.xpm";
	assets->count->path_6 = "assets/count/number_6.xpm";
	assets->count->path_7 = "assets/count/number_7.xpm";
	assets->count->path_8 = "assets/count/number_8.xpm";
	assets->count->path_9 = "assets/count/number_9.xpm";
	assets->count->size_img_bg_x = 130;
	assets->count->size_img_bg_y = PXL_SIZE;
	assets->count->size_img_nb_x = 10;
	assets->count->size_img_nb_y = 15;
}

t_assets	*sp_init_assets(void)
{
	t_assets	*assets;

	assets = malloc(sizeof(t_assets));
	if (!assets)
		err_put_exit();
	assets->walls = (t_walls *)malloc(sizeof(t_walls));
	if (!assets->walls)
		err_put_exit();
	assets->count = (t_count *)malloc(sizeof(t_count));
	if (!assets->count)
		err_put_exit();
	assets->path_background = "assets/backgrounds/island_ground_1.xpm";
	assets->path_item = "assets/items/egg_1.xpm";
	assets->path_player = "assets/player/gold_chicken_idle_1.xpm";
	sp_init_walls(assets);
	sp_init_count(assets);
	return (assets);
}
