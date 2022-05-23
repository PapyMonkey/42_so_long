/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 05:46:23 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:48:22 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	var_init(t_mlx *var, int argc, char **argv)
{
	var->map = p_main(argc, argv);
	var->mlx = mlx_init();
	var->win_x = var->map->size_x * PXL_SIZE;
	var->win_y = var->map->size_y * PXL_SIZE;
	var->player = pl_init(var);
}

void	var_free(t_mlx *var)
{
	free(var->map);
	free(var->player);
}
