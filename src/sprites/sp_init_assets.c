/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_init_assets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:07:35 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:39:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_assets	*sp_init_assets(void)
{
	t_assets	*assets;

	assets = malloc(sizeof(t_assets));
	if (!assets)
		error_put_exit();
	assets->path_background = "assets/backgrounds/island_ground_1.xpm";
	assets->path_item = "assets/items/egg_1.xpm";
	assets->path_player = "assets/player/gold_chicken_idle_1.xpm";
	assets->path_wall = "assets/walls/pumpkin_1.xpm";
	return (assets);
}
