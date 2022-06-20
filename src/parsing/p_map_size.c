/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_map_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:49:52 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/20 15:16:52 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Prints custom error code.
 */
static void	p_size_error(void)
{
	ft_printf("Error: mauvaise taille de map\n");
	exit(EXIT_FAILURE);
}

/**
 * @brief Gets the length of a given string until the first '\n' character.
 *
 * @param str Source string.
 * @return Length of the string.
 */
static int	p_strlen_newline(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

void	p_get_size(t_map *map)
{
	char	*line;

	line = ft_get_next_line(map->fd[0]);
	if (!line)
		p_size_error();
	map->size_x = p_strlen_newline(line);
	map->size_y = 0;
	while (line != NULL)
	{
		if (map->size_y != 0 && p_strlen_newline(line) != map->size_x)
			p_size_error();
		map->size_y++;
		free(line);
		line = ft_get_next_line(map->fd[0]);
	}
}
