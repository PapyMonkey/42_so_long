/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:31:38 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/18 01:40:27 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_main(int argc, char **argv)
{
	t_map	map;

	p_args_check(argc, argv);
	p_map_init(&map, argv[1]);
	p_print_map(&map);
	p_check_wall(&map);
	p_check_map_content(&map);
}
