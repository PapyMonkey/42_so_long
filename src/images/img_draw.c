/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:57:42 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:26:26 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_draw(t_mlx *var)
{
	int		x;
	int		y;

	y = 0;
	while (y < var->map->size_y)
	{
		x = 0;
		while (x < var->map->size_x)
		{
			sp_print_background(var, x, y);
			sp_print_items(var, x, y);
			sp_print_walls(var, x, y);
			x++;
		}
		y++;
	}
	sp_print_player(var);
}
