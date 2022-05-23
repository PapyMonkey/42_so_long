/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:44:58 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:24:29 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPRITES_H
# define SPRITES_H

# include "structures.h"

// ****************************************************************************
// Functions - sp_background.c

/**
 * @brief Print the background on all window.
 *
 * @param var Variable containing all the other useful ones.
 */
void		sp_print_background(t_mlx *var, int x, int y);

// ****************************************************************************
// Functions - sp_player.c

/**
 * @brief Print the player according to his current position.
 *
 * @param var Variable containing all the other useful ones.
 */
void		sp_print_player(t_mlx *var);

// ****************************************************************************
// Functions - sp_items.c

/**
 * @brief Check if the cursor's current position is on an item.
 * 		If so, print it.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position.
 * @param y y position.
 */
void		sp_print_items(t_mlx *var, int x, int y);

// ****************************************************************************
// Functions - sp_init_assets.c

/**
 * @brief Create an assets collection and store it inside a t_assets structure.
 *
 * @return Assets structure containing all paths.
 */
t_assets	*sp_init_assets(void);

// ****************************************************************************
// Functions - sp_walls.c

/**
 * @brief Check if the cursor's current position is on a wall. If so, print it.
 *
 * @param var Variable containing all the other useful ones.
 * @param x x position.
 * @param y y position.
 */
void		sp_print_walls(t_mlx *var, int x, int y);

#endif // ifndef SRITES_H
