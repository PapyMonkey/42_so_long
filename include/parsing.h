/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:57:48 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 04:20:18 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "structures.h"

// ****************************************************************************
// Macros - Map characters

# define MAP_EMPTY '0'
# define MAP_WALL '1'
# define MAP_ITEM 'C'
# define MAP_EXIT 'E'
# define MAP_START 'P'

// ****************************************************************************
// Functions - args_check.c

void	p_args_check(int argc, char **argv);

// ****************************************************************************
// Functions - map_size.c

void	p_get_size(t_map *map);

// ****************************************************************************
// Functions - parsing_array.c

void	p_write_array(t_map *map);

// ****************************************************************************
// Functions - parsing_check.c

void	p_check_wall(t_map *map);
void	p_check_map_content(t_map *map);

// ****************************************************************************
// Functions - parsing_io.c

int		p_open_file(char *file_name);
void	p_close_file(int file_fd);
void	p_print_map(t_map *map);

// ****************************************************************************
// Functions - parsing_main.c

t_map	*p_main(int argc, char **argv);

// ****************************************************************************
// Functions - parsing_map_init.c

void	p_map_init(t_map *map, char *file_path);

#endif
