/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:57:24 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 09:28:09 by aguiri           ###   ########.fr       */
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

#endif		// ifndef IMAGES_H
