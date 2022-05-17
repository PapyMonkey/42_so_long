/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:31:38 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/18 00:09:15 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_main(int argc, char **argv)
{
	t_map	map;

	p_args_check(argc, argv);
	p_map_init(&map, argv[1]);
	ft_printf("size_x : %d\tsize_y : %d\n", map.size_x, map.size_y);
	p_write_array(&map);
	// p_print_map(&map);
}
