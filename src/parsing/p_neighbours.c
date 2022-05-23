/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_neighbours.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:22:26 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 18:32:02 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*p_neighbours(t_mlx *var, int x, int y, char c)
{
	if (y != 0 && var->map->array[y - 1][x] == c)
	{
		ft_printf("Coucou les potes\n");
		if (x != 0 && var->map->array[y][x - 1] == c
			&& var->map->array[y][x + 1] == c)
			return ("ULR");
		else if (x != 0 && var->map->array[y][x - 1] == c)
			return ("UL");
		else if (var->map->array[y][x + 1] == c)
			return ("UR");
		else
			return ("U");
	}
	else
	{
		if (x != 0 && var->map->array[y][x - 1] == c
			&& var->map->array[y][x + 1] == c)
			return ("LR");
		else if (x != 0 && var->map->array[y][x - 1] == c)
			return ("L");
		else if (var->map->array[y][x + 1] == c)
			return ("R");
		else
			return ("S");
	}
}
