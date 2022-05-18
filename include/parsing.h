/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:57:48 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/18 01:24:47 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include <stddef.h> // For clang to match 'size_t'

# define MAP_EMPTY '0'
# define MAP_WALL '1'
# define MAP_ITEM 'C'
# define MAP_EXIT 'E'
# define MAP_START 'P'

// ****************************************************************************
// Structures

/**
 * \brief   ???
 */
typedef struct s_map {
	size_t	size_x;
	size_t	size_y;
	char	**array;
	int		*fd;
	int		nb_item;
	int		nb_exit;
	int		nb_start;
}			t_map;

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

void	p_main(int argc, char **argv);

// ****************************************************************************
// Functions - parsing_map_init.c

void	p_map_init(t_map *map, char *file_path);

#endif
