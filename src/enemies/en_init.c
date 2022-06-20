/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   en_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:01:26 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 07:51:12 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	en_init_current_paths(t_enemies *enemies)
{
	int	n;

	n = 0;
	while (enemies->pos[n] != NULL)
		enemies->pos[n++]->img_current = enemies->img_down_1;
}

static void	en_init_assets(t_enemies *enemies)
{
	enemies->path_up_1 = "assets/enemies/void_chicken_up_1.xpm";
	enemies->path_up_2 = "assets/enemies/void_chicken_up_2.xpm";
	enemies->path_up_3 = "assets/enemies/void_chicken_up_3.xpm";
	enemies->path_down_1 = "assets/enemies/void_chicken_down_1.xpm";
	enemies->path_down_2 = "assets/enemies/void_chicken_down_2.xpm";
	enemies->path_down_3 = "assets/enemies/void_chicken_down_3.xpm";
	enemies->path_left_1 = "assets/enemies/void_chicken_left_1.xpm";
	enemies->path_left_2 = "assets/enemies/void_chicken_left_2.xpm";
	enemies->path_left_3 = "assets/enemies/void_chicken_left_3.xpm";
	enemies->path_right_1 = "assets/enemies/void_chicken_right_1.xpm";
	enemies->path_right_2 = "assets/enemies/void_chicken_right_2.xpm";
	enemies->path_right_3 = "assets/enemies/void_chicken_right_3.xpm";
}

static void	en_get_pos_extent(t_enemies *enemies, t_mlx *var, int *n)
{
	int	x;
	int	y;

	y = 1;
	while (y < var->map->size_y - 1)
	{
		x = 1;
		while (x < var->map->size_x - 1)
		{
			if (var->map->array[y][x] == MAP_HENEMY
				|| var->map->array[y][x] == MAP_VENEMY)
			{
				enemies->pos[*n] = (t_pos *)malloc(sizeof(t_pos));
				enemies->pos[*n]->x = x;
				enemies->pos[*n]->y = y;
				if (var->map->array[y][x] == MAP_HENEMY)
					enemies->pos[*n]->dir = 'L';
				else if (var->map->array[y][x] == MAP_VENEMY)
					enemies->pos[*n]->dir = 'D';
				(*n)++;
			}
			x++;
		}
		y++;
	}
}

static void	en_get_pos(t_enemies *enemies, t_mlx *var)
{
	int	nb_enemies;
	int	n;

	nb_enemies = var->map->nb_henemies + var->map->nb_venemies;
	enemies->pos = (t_pos **)malloc(sizeof(t_pos *) * nb_enemies + 1);
	if (!enemies->pos)
		err_put_exit();
	enemies->pos[nb_enemies] = NULL;
	n = 0;
	en_get_pos_extent(enemies, var, &n);
}

t_enemies	*en_init(t_mlx *var)
{
	t_enemies	*enemies;

	enemies = malloc(sizeof(t_enemies));
	if (!enemies)
		err_put_exit();
	en_init_assets(enemies);
	en_get_pos(enemies, var);
	return (enemies);
}
