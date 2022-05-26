/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:52:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 13:50:58 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "structures.h"

// ****************************************************************************
// Functions - pl_check.c

/**
 * @brief Check if the cursor is poiting on a exit. Return 1 if it, 0 if not.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position of the cursor.
 * @param y y position of the cursor.
 * @return 1 if the cursor is on an exit, 0 if not.
 */
int			pl_check_exit(t_mlx *var, int x, int y);

/**
 * @brief Check if the cursor is poiting on an item. Return 1 if it, 0 if not.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position of the cursor.
 * @param y y position of the cursor.
 * @return 1 if the cursor is on an item, 0 if not.
 */
int			pl_check_items(t_mlx *var, int x, int y);

/**
 * @brief Check if the cursor is poiting on a wall. Return 1 if it, 0 if not.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position of the cursor.
 * @param y y position of the cursor.
 * @return 1 if the cursor is on a wall, 0 if not.
 */
int			pl_check_walls(t_mlx *var, int x, int y);

/**
 * @brief Manages all the player check-related functions. Return 1 if the
 * 		player can move to the cursor, 0 if not.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position of the cursor.
 * @param y y position of the cursor.
 * @return 1 if the cursor is the player can move to the cursor, 0 if not.
 */
int			pl_check_main(t_mlx *var, int x, int y);

// ****************************************************************************
// Functions - pl_get_pos.c

/**
 * @brief Gets the current [x,y] position of the player and stores it in the
 *		t_player variable (function's argument).
 *
 * @param player Structure holding the player's informations.
 * @param var Variable containing all the other useful ones.
 */
void		pl_get_pos(t_player *player, t_mlx *var);

// ****************************************************************************
// Functions - pl_init.c

/**
 * @brief Initializes the player information and stores it in a t_player
 * 		variable.
 *
 * @param var Variable containing all the other useful ones.
 * @return Structure holding all the player informations.
 */
t_player	*pl_init(t_mlx *var);

// ****************************************************************************
// Functions - pl_moves.c

/**
 * @brief Manages the player's upward movement.
 *
 * @param var Variable containing all the other useful ones.
 */
void		pl_move_up(t_mlx *var);

/**
 * @brief Manages the player's downward movement.
 *
 * @param var Variable containing all the other useful ones.
 */
void		pl_move_down(t_mlx *var);

/**
 * @brief Manages the movement of the player to the left.
 *
 * @param var Variable containing all the other useful ones.
 */
void		pl_move_left(t_mlx *var);

/**
 * @brief Manages the movement of the player to the right.
 *
 * @param var Variable containing all the other useful ones.
 */
void		pl_move_right(t_mlx *var);

#endif		// ifndef PLAYER_H
