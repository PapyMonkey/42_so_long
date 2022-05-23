/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:03:32 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:28:23 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_map_init(t_map *map, char *file_path)
{
	map->fd = malloc(sizeof(int) * 2);
	map->fd[0] = p_open_file(file_path);
	map->fd[1] = p_open_file(file_path);
	map->nb_item = 0;
	map->nb_exit = 0;
	map->nb_start = 0;
	p_get_size(map);
	map->array = malloc(sizeof(char *) * map->size_y + 1);
	map->array[map->size_y] = "\0";
	p_write_array(map);
}
