/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:58:21 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:21:47 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <string.h>
# include <errno.h>

# include <mlx.h>
# include "libft.h"

# include "keycodes.h"
# include "parsing.h"
# include "player.h"
# include "sprites.h"
# include "structures.h"
# include "win_management.h"

# define PXL_SIZE 32
# define DEBUG_MODE 0

// ****************************************************************************
// Functions - Events

static void	event_esc(int key, t_mlx *var);

static void	event_move_player(int key, t_mlx *var);

int			event_main(int key, t_mlx *var);

// ****************************************************************************
// Functions

void		error_put_exit(void);

#endif		// ifndef SO_LONG_H
