/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_map_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:03:32 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 04:52:06 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_map_init(t_map *map, char *file_path)
{
	map->fd = malloc(sizeof(int) * 2);
	if (!map->fd)
		err_put_exit();
	map->fd[0] = p_open_file(file_path);
	map->fd[1] = p_open_file(file_path);
	map->nb_item = 0;
	map->nb_exit = 0;
	map->nb_start = 0;
	map->nb_venemies = 0;
	map->nb_henemies = 0;
	p_get_size(map);
	map->array = malloc(sizeof(char *) * map->size_y + 1);
	if (!map->array)
		err_put_exit();
	map->array[map->size_y] = "\0";
	p_write_array(map);
}
