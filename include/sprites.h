/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:44:58 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 09:23:34 by aguiri           ###   ########.fr       */
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
void	sp_background(t_mlx *var);

// ****************************************************************************
// Functions - sp_background.c

/**
 * @brief Create an image of the player thanks to his current position and put it
 *		to the main window.
 *
 * @param var Variable containing all the other useful ones.
 */
void	sp_player(t_mlx *var);

#endif // ifndef SRITES_H
