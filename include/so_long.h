/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:58:21 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 12:36:00 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <string.h>
# include <errno.h>

# include <mlx.h>
# include "libft.h"

# include "images.h"
# include "keycodes.h"
# include "parsing.h"
# include "player.h"
# include "sprites.h"
# include "structures.h"

# define PXL_SIZE 32
# define DEBUG_MODE 0
# define PRINT_MOVES 1

// ****************************************************************************
// Functions - Events

/**
 * @brief Handle ESC press key and exit the program.
 *
 * @param key Key code.
 * @param var Variable containing all the other useful ones.
 */
static void	event_esc(int key, t_mlx *var);

/**
 * @brief Function to move the player around the map.
 *
 * @param key Key code.
 * @param var Variable containing all the other useful ones.
 */
static void	event_move_player(int key, t_mlx *var);

/**
 * @brief Handle the "click on red-cross" event and exit the program.
 *
 * @param var Variable containing all the other useful ones.
 */
int			event_redcross(t_mlx *var);

/**
 * @brief Function to manage all the differents hook events.
 *
 * @param key Key code.
 * @param var Variable containing all the other useful ones.
 * @return Return 1 if successful, 0 if not.
 */
int			event_main(int key, t_mlx *var);

// ****************************************************************************
// Functions - Init and free

/**
 * @brief Initiates the structures needed to run the program.
 *
 * @param var Variable that will contain all the other useful ones.
 * @param argc Number of arguments to the main function.
 * @param argv Arguments of the main function.
 */
void		var_init(t_mlx *var, int argc, char **argv);

/**
 * @brief Free all the structures needed to run the program.
 *
 * @param var Variable containing all the other useful ones.
 */
void		var_free(t_mlx *var);

// ****************************************************************************
// Functions - Errors

/**
 * @brief Print error code and exit the program.
 */
void		error_put_exit(void);

#endif		// ifndef SO_LONG_H
