/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemies.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 06:00:28 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 21:29:11 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMIES_H
# define ENEMIES_H

# include "structures.h"

// ****************************************************************************
// Functions - en_init.c

void		en_init_current_paths(t_enemies *enemies);

/**
 * @brief Initialize the enemies informations and store them in a t_enemies
 * 		structure.
 *
 * @param var Variable containing all the other useful ones.
 * @return Structure holding all the enemies informations.
 */
t_enemies	*en_init(t_mlx *var);

// ****************************************************************************
// Functions - en_loose.c

/**
 * @brief Display the loosing messages.
 *
 * @param var Variable containing all the other useful ones.
 */
void		en_loose(t_mlx *var);

// ****************************************************************************
// Functions - en_moves.c

void		en_moves(t_mlx *var);

#endif		// ifndef ENEMIES_H
