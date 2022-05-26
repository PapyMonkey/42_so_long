/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:15:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/26 23:16:36 by aguiri           ###   ########.fr       */
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
 * struct s_walls - Contains all the information of the walls sprites.
 */
typedef struct s_walls {
	char	*path_ulr;
	char	*path_ul;
	char	*path_ur;
	char	*path_u;
	char	*path_lr;
	char	*path_l;
	char	*path_r;
	char	*path_s;
	t_img	*img_ulr;
	t_img	*img_ul;
	t_img	*img_ur;
	t_img	*img_u;
	t_img	*img_lr;
	t_img	*img_l;
	t_img	*img_r;
	t_img	*img_s;
	int		img_size;
}			t_walls;

/**
 * struct s_count - Contains all the informations of the counting module 
 * 					sprites.
 */
typedef struct s_count {
	char	*path_bg;
	char	*path_0;
	char	*path_1;
	char	*path_2;
	char	*path_3;
	char	*path_4;
	char	*path_5;
	char	*path_6;
	char	*path_7;
	char	*path_8;
	char	*path_9;
	t_img	*img_bg;
	t_img	*img_0;
	t_img	*img_1;
	t_img	*img_2;
	t_img	*img_3;
	t_img	*img_4;
	t_img	*img_5;
	t_img	*img_6;
	t_img	*img_7;
	t_img	*img_8;
	t_img	*img_9;
	int		size_img_bg_x;
	int		size_img_bg_y;
	int		size_img_nb_x;
	int		size_img_nb_y;
}			t_count;

/**
 * struct s_assets - Contains all the assets' different path.
 */
typedef struct s_assets {
	char	*path_background;
	char	*path_exit;
	char	*path_item;
	char	*path_player;
	t_img	*img_background;
	t_img	*img_exit;
	t_img	*img_item;
	t_img	*img_player;
	int		img_size;
	t_walls	*walls;
	t_count	*count;
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
	char		*win_name;
	t_assets	*assets;
	t_map		*map;
	t_player	*player;
}				t_mlx;

#endif		// ifndef STRUCTURES_H
