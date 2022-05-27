/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:39:29 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 01:40:23 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_print_exit(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_EXIT)
	{
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->exit->img_current,
			x * PXL_SIZE, (y + 2) * PXL_SIZE);
	}
}
