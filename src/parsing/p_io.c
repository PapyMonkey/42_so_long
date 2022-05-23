/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_io.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:56:34 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 15:04:36 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	p_open_file(char *file_name)
{
	int	file_fd;

	file_fd = open(file_name, O_RDONLY);
	if (file_fd == -1)
		err_put_exit();
	return (file_fd);
}

void	p_close_file(int file_fd)
{
	int	tmp;

	tmp = close(file_fd);
	if (tmp == -1)
		err_put_exit();
}

void	p_print_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->size_y)
		ft_printf("%s\n", map->array[i++]);
}
