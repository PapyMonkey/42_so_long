/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:52:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 09:17:01 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "structures.h"

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
