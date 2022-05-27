/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 00:19:58 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 02:12:46 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	free_count(t_count *count)
{
	free(count->img_bg);
	free(count->img_0);
	free(count->img_1);
	free(count->img_2);
	free(count->img_3);
	free(count->img_4);
	free(count->img_5);
	free(count->img_6);
	free(count->img_7);
	free(count->img_8);
	free(count->img_9);
	free(count);
}

static void	free_map(t_map *map)
{
	int	n;

	n = 0;
	while (n < map->size_y)
		free(map->array[n++]);
	free(map->array);
	free(map->fd);
	free(map);
}

static void	free_walls(t_walls *walls)
{
	free(walls->img_ulr);
	free(walls->img_ul);
	free(walls->img_ur);
	free(walls->img_u);
	free(walls->img_lr);
	free(walls->img_l);
	free(walls->img_r);
	free(walls->img_s);
	free(walls);
}

void	var_free(t_mlx *var)
{
	free_count(var->assets->count);
	free_walls(var->assets->walls);
	free(var->assets->exit->img_awake);
	free(var->assets->exit->img_idle_1);
	free(var->assets->exit->img_idle_2);
	free(var->assets->img_background);
	free(var->assets->img_item);
	free(var->assets->img_player);
	free(var->assets);
	free(var->player);
	free_map(var->map);
}
