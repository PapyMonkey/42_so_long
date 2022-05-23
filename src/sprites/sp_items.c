/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_items.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:11:47 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:40:43 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_print_items(t_mlx *var, int x, int y)
{
	if (var->map->array[y][x] == MAP_ITEM)
	{
		mlx_put_image_to_window(var->mlx, var->win,
			var->assets->img_item,
			x * PXL_SIZE, (y + 1) * PXL_SIZE);
	}
}
