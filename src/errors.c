/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:18:46 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:37:46 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_put_exit(void)
{
	ft_printf("Error: %s\n", strerror(errno));
	exit(EXIT_FAILURE);
}

/**
 * @brief Check if all the walls assets have been loaded correctly.
 *
 * @param var Variable containing all the other useful ones.
 */
static void	err_load_walls(t_mlx *var)
{
	if (!var->assets->walls->img_ulr
		|| !var->assets->walls->img_ul
		|| !var->assets->walls->img_ur
		|| !var->assets->walls->img_u
		|| !var->assets->walls->img_lr
		|| !var->assets->walls->img_l
		|| !var->assets->walls->img_r
		|| !var->assets->walls->img_s)
		err_put_exit();
}

void	err_load_assets(t_mlx *var)
{
	err_load_walls(var);
	if (!var->assets->img_background
		|| !var->assets->img_item
		|| !var->assets->img_player)
		err_put_exit();
}
