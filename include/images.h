/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:57:24 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:46:37 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGES_H
# define IMAGES_H

# include "structures.h"

// *****************************************************************************
// Functions - img_create.c

/**
 * @brief Create a MLX image, store it in a structure and return it.
 *
 * @param var Variable containing all the other useful ones.
 * @param width Width of the image to be created.
 * @param height Height of the image to be created.
 * @return Image stored in a custom structure.
 */
t_img	*img_create(t_mlx *var, int width, int height);

// *****************************************************************************
// Functions - img_load.c

/**
 * @brief Draw all the images in the window.
 *
 * @param var Variable containing all the other useful ones.
 */
void	img_draw(t_mlx *var);

// *****************************************************************************
// Functions - img_load.c

/**
 * @brief Load all assets and store it in a structure.
 *
 * @param var Variable containing all the other useful ones.
 */
void	img_load(t_mlx *var);

#endif		// ifndef IMAGES_H
