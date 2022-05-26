/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 00:19:58 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 00:29:30 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

void	var_free(t_mlx *var)
{
	free_walls(var->assets->walls);
	free_count(var->assets->count);
	free(var->assets->img_background);
	free(var->assets->img_item);
	free(var->assets->img_player);
	free(var->assets);
	free(var->map);
	free(var->player);
}
