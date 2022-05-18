/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:24:35 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/18 01:56:24 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "so_long.h"

static void	p_err_wall(void)
{
	ft_printf("Error: la carte fournie n'est pas fermee "
		"entierement entouree de %c) \n", MAP_WALL);
	exit(EXIT_FAILURE);
}

void	p_check_wall(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->size_x)
	{
		if (map->array[0][i] != MAP_WALL
			|| map->array[map->size_y - 1][i] != MAP_WALL)
			p_err_wall();
		i++;
	}
	i = 0;
	while (i < map->size_y)
	{
		if (map->array[i][0] != MAP_WALL
			|| map->array[i][map->size_x - 1] != MAP_WALL)
			p_err_wall();
		i++;
	}
}

static void	p_err_map_unknown(char c)
{
	ft_printf("Error: la carte fournie contient un caractere incorrect "
		"et/ou inconnu (%c) \n", c);
	exit(EXIT_FAILURE);
}

static void	p_err_map_content(t_map *map)
{
	if (map->nb_item < 1)
	{
		ft_printf("Error: la carte fournie ne contient pas suffisamment "
			"d'items (au moins un, represente par un %c) \n", MAP_ITEM);
		exit(EXIT_FAILURE);
	}
	if (map->nb_exit < 1)
	{
		ft_printf("Error: la carte fournie ne contient pas suffisamment "
			"de sorties (au moins un, representee par un %c) \n", MAP_EXIT);
		exit(EXIT_FAILURE);
	}
	if (map->nb_start != 1)
	{
		ft_printf("Error: la carte fournie contient un nombre incorrect "
			"de point de depart (un seul, represente par un %c) \n", MAP_START);
		exit(EXIT_FAILURE);
	}
}

void	p_check_map_content(t_map *map)
{
	int	y;
	int	x;

	y = 1;
	while (y < map->size_y - 1)
	{
		x = 1;
		while (x < map->size_x - 1)
		{
			if (map->array[y][x] == MAP_ITEM)
				map->nb_item++;
			else if (map->array[y][x] == MAP_EXIT)
				map->nb_exit++;
			else if (map->array[y][x] == MAP_START)
				map->nb_start++;
			else if (map->array[y][x] != MAP_EMPTY
				&& map->array[y][x] != MAP_WALL)
				p_err_map_unknown(map->array[y][x]);
			x++;
		}
		y++;
	}
	if (map->nb_item < 1 || map->nb_exit < 1 || map->nb_start != 1)
		p_err_map_content(map);
}
