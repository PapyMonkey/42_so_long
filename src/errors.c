/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:18:46 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/20 12:21:31 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_put_exit(void)
{
	ft_printf("Error: %s\n", strerror(errno));
	exit(EXIT_FAILURE);
}

/**
 * @brief	Check if all the walls and count module
 * 			assets have been loaded correctly.
 *
 * @param var Variable containing all the other useful ones.
 */
static void	err_load_walls_and_counts(t_walls *w, t_count *c)
{
	if (!w->img_ulr || !w->img_ul || !w->img_ur || !w->img_u
		|| !w->img_lr || !w->img_l || !w->img_r || !w->img_s
		|| !c->img_0 || !c->img_1 || !c->img_2 || !c->img_3
		|| !c->img_4 || !c->img_5 || !c->img_6 || !c->img_7
		|| !c->img_8 || !c->img_9)
		err_put_exit();
}

/**
 * @brief	Check if all the enemies assets have been loaded correctly.
 *
 * @param var Variable containing all the other useful ones.
 */
static void	err_load_enemies(t_enemies *e)
{
	if (!e->img_down_1 || !e->img_down_2 || !e->img_down_3
		|| !e->img_left_1 || !e->img_left_2 || !e->img_left_3
		|| !e->img_right_1 || !e->img_right_2 || !e->img_right_3
		|| !e->img_up_1 || !e->img_up_2 || !e->img_up_3)
		err_put_exit();
}

void	err_load_assets(t_mlx *var)
{
	err_load_walls_and_counts(var->assets->walls, var->assets->count);
	if (var->map->nb_venemies || var->map->nb_henemies)
		err_load_enemies(var->enemies);
	if (!var->assets->img_background
		|| !var->assets->img_item
		|| !var->assets->exit->img_awake
		|| !var->assets->exit->img_idle_1
		|| !var->assets->exit->img_idle_2
		|| !var->assets->img_player)
		err_put_exit();
}
