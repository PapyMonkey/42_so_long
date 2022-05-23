/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:15:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:31:09 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

// For clang to match 'size_t'
# include <stddef.h>

// ****************************************************************************
// Structures

typedef struct s_img {
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}			t_img;

/**
 * \brief   ???
 */
typedef struct s_map {
	size_t	size_x;
	size_t	size_y;
	char	**array;
	int		*fd;
	int		nb_item;
	int		nb_exit;
	int		nb_start;
}			t_map;

typedef struct s_player {
	int		pos_x;
	int		pos_y;
}			t_player;

typedef struct s_mlx {
	void		*mlx;
	void		*win;
	int			win_x;
	int			win_y;
	t_map		*map;
	t_player	*player;
}				t_mlx;

#endif		// ifndef STRUCTURES_H
