/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:19:20 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/18 00:00:05 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	p_read_error(void)
{
	ft_printf("Error: impossible de lire le fichier (GNL)\n");
	exit(EXIT_FAILURE);
}

static char	*p_strdup_newline(char *src, int len)
{	
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		*(cpy + i) = *(src + i);
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}

void	p_write_array(t_map *map)
{
	int		y;
	char	*line;

	y = 0;
	while (y < map->size_y)
	{
		line = ft_get_next_line(map->fd[1]);
		if (line == NULL)
			p_read_error();
		map->array[y] = p_strdup_newline(line, map->size_x);
		y++;
	}
}
