/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:44:58 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 13:52:53 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPRITES_H
# define SPRITES_H

# include "structures.h"

// ****************************************************************************
// Functions - sp_background.c

/**
 * @brief Create an image containing the background and put it to the main
 * 		window.
 *
 * @param var Variable containing all the other useful ones.
 */
void		sp_background(t_mlx *var);

// ****************************************************************************
// Functions - sp_background.c

/**
 * @brief Create an image of the player thanks to his current position and put it
 *		to the main window.
 *
 * @param var Variable containing all the other useful ones.
 */
void		sp_player(t_mlx *var);

// ****************************************************************************
// Functions - sp_items.c

/**
 * @brief Load the item sprite(s).
 *
 * @param var Variable containing all the other useful ones.
 */
void		sp_items(t_mlx *var);

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
 * @brief Load the wall sprite(s).
 *
 * @param var Variable containing all the other useful ones.
 */
void		sp_walls(t_mlx *var);

#endif // ifndef SRITES_H
