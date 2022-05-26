/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 05:46:23 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 00:24:31 by aguiri           ###   ########.fr       */
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
	var->win_name = "so_stardew";
	var->player = pl_init(var);
	img_load(var);
}
