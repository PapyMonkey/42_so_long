/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:57:48 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 04:50:51 by aguiri           ###   ########.fr       */
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
# define MAP_VENEMY 'V'
# define MAP_HENEMY 'H'

// ****************************************************************************
// Functions - p_array.c

/**
 * @brief Writes the content of the map inside a 2D array, stored in the
 * 		t_map structure (function's argument).
 *
 * @param map Structure holding the parsed map.
 */
void	p_write_array(t_map *map);

// ****************************************************************************
// Functions - p_args_check.c

/**
 * @brief Check if the given arguments are correct.
 *
 * @param argc Number of arguments to the main function.
 * @param argv Arguments of the main function.
 */
void	p_args_check(int argc, char **argv);

// ****************************************************************************
// Functions - p_check.c

/**
 * @brief Checks if the given map is enclosed by walls. If not, returns a
 * 		custom error message on standard output and exits the program.
 *
 * @param map Structure holding the parsed map.
 */
void	p_check_wall(t_map *map);

/**
 * @brief Checks if the given map is contains the right number of elements.
 * 		If not, returns a custom error message on standard output and exits
 * 		the program.
 *
 * @param map Structure holding the parsed map.
 */
void	p_check_map_content(t_map *map);

// ****************************************************************************
// Functions - p_io.c

/**
 * @brief Opens a file in READONLY mode and returns the corresponding 
 *		file descriptor. Prints a custom error message on the standard output
 *		if the reading fails and exit the program.
 *
 * @param file_name Name of the file to open.
 * @return File descriptor pointing to the opened file.
 */
int		p_open_file(char *file_name);

/**
 * @brief Closes a file descriptor. Prints a custom error message on the
 * 		standard output if the reading fails and exit the program.
 *
 * @param file_fd File descriptor pointing to the opened file.
 */
void	p_close_file(int file_fd);

/**
 * @brief Prints the parsed map on the standard output.
 *
 * @param map Structure holding the parsed map.
 */
void	p_print_map(t_map *map);

// ****************************************************************************
// Functions - p_main.c

/**
 * @brief Manages all the parsing-related functions.
 *
 * @param argc Number of arguments to the main function.
 * @param argv Arguments of the main function.
 * @return map Structure holding the parsed map.
 */
t_map	*p_main(int argc, char **argv);

// ****************************************************************************
// Functions - p_map_init.c

/**
 * @brief Initializes the structure and all its components.
 *
 * @param map Structure holding the parsed map.
 * @param file_name Name of the file.ber containing the map.
 */
void	p_map_init(t_map *map, char *file_path);

// ****************************************************************************
// Functions - p_map_size.c

/**
 * @brief Gets the size of the map and store it into the t_map structure
 * 		(function's argument).
 *
 * @param map Structure holding the parsed map.
 */
void	p_get_size(t_map *map);

// ****************************************************************************
// Functions - p_neighbours.c

/**
 * @brief Checks if the current position has neighbours.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position.
 * @param y y position.
 * @param c Character to compare.
 * @return 	- "ULF" for [up ; left ; right] neighbours.
 *			- "UL" for [up ; left] neighbours.
 *			- "UR" for [up ; right] neighbours.
 *			- "U" for [up] neighbour.
 *			- "LR" for [left ; right] neighbours.
 *			- "L" for [left] neighbour.
 *			- "R" for [right] neighbour.
 *			- "S" for [solo] (no neighbour).
 */
char	*p_neighbours(t_mlx *var, int x, int y, char c);

#endif
