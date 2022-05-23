/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win_management.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:57:24 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:30:26 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIN_MANAGEMENT_H
# define WIN_MANAGEMENT_H

# include "structures.h"

// *****************************************************************************
// Functions - Windows and images mangement related

t_img	*img_create(t_mlx *var, int width, int height);

#endif		// ifndef WIN_MANAGEMENT_H
