/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_init_assets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:07:35 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:04:12 by aguiri           ###   ########.fr       */
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

t_assets	*sp_init_assets(void)
{
	t_assets	*assets;

	assets = malloc(sizeof(t_assets));
	if (!assets)
		err_put_exit();
	assets->walls = (t_walls *)malloc(sizeof(t_walls));
	if (!assets->walls)
		err_put_exit();
	assets->path_background = "assets/backgrounds/island_ground_1.xpm";
	assets->path_item = "assets/items/egg_1.xpm";
	assets->path_player = "assets/player/gold_chicken_idle_1.xpm";
	sp_init_walls(assets);
	return (assets);
}
