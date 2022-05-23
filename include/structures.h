/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:15:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:06:24 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# include <stddef.h>	// For clang to match 'size_t'

// ****************************************************************************
// Structures

/**
 * struct s_img - Contains all the information of a given image.
 */
typedef struct s_img {
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}			t_img;

/**
 * struct s_assets - Contains all the assets' different path.
 */
typedef struct s_assets {
	char	*path_background;
	char	*path_exit;
	char	*path_item;
	char	*path_player;
	char	*path_wall;
	t_img	*img_background;
	t_img	*img_exit;
	t_img	*img_item;
	t_img	*img_player;
	t_img	*img_wall;
	int		img_size;
}			t_assets;

/**
 * struct s_map - Contains all the information of the parsed map.
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

/**
 * struct s_player - Contains all the player's information.
 */
typedef struct s_player {
	int		pos_x;
	int		pos_y;
	int		inventory;
	int		nb_moves;
}			t_player;

/**
 * struct s_mlx - Contains all useful variable. Used in all functions.
 */
typedef struct s_mlx {
	void		*mlx;
	void		*win;
	int			win_x;
	int			win_y;
	t_assets	*assets;
	t_map		*map;
	t_player	*player;
}				t_mlx;

#endif		// ifndef STRUCTURES_H
