/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:58:21 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/17 19:03:12 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <string.h>
# include <errno.h>

# include <mlx.h>
# include "libft.h"

# include "parsing.h"

// ****************************************************************************
// Structures

typedef struct s_mlx {
	void	*mlx;
	void	*win;
}			t_mlx;

// ****************************************************************************
// Functions - close.c

int		event_esc(int key, t_mlx *arg);

// ****************************************************************************
// Functions - errors.c

void	error_put_exit(void);

#endif
