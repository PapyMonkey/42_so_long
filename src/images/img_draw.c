/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:57:42 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/26 23:00:27 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_draw(t_mlx *var)
{
	int		x;
	int		y;

	y = 0;
	sp_print_background(var);
	sp_print_count(var);
	while (y < var->map->size_y)
	{
		x = 0;
		while (x < var->map->size_x)
		{
			sp_print_player(var);
			sp_print_items(var, x, y);
			x++;
		}
		y++;
	}
	y = 0;
	while (y < var->map->size_y)
	{
		x = 0;
		while (x < var->map->size_x)
			sp_print_walls(var, x++, y);
		y++;
	}
}
