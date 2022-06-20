/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:15:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 07:36:37 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# include <stddef.h>	// For clang to match 'size_t'

// ****************************************************************************
// Structures

/**
 * struct s_img - Contains all the informations of a given image.
 */
typedef struct s_img {
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}			t_img;

/**
 * struct s_pos - Contains all position informations of a given object.
 */
typedef struct s_pos {
	int		x;
	int		y;
	char	dir;
	t_img	*img_current;
}			t_pos;

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
 * struct s_exit - Contains all the exit's different paths.
 */
typedef struct s_exit {
	char	*path_idle_1;
	char	*path_idle_2;
	char	*path_awake;
	t_img	*img_idle_1;
	t_img	*img_idle_2;
	t_img	*img_awake;
	t_img	*img_current;
}			t_exit;

/**
 * struct s_walls - Contains all the informations of the walls sprites.
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
 * struct s_assets - Contains all the assets' different paths.
 */
typedef struct s_assets {
	char	*path_background;
	char	*path_item;
	char	*path_player;
	t_img	*img_background;
	t_img	*img_item;
	t_img	*img_player;
	int		img_size;
	t_walls	*walls;
	t_count	*count;
	t_exit	*exit;
}			t_assets;

/**
 * struct s_map - Contains all the informations of the parsed map.
 */
typedef struct s_map {
	size_t	size_x;
	size_t	size_y;
	char	**array;
	int		*fd;
	int		nb_item;
	int		nb_exit;
	int		nb_start;
	int		nb_venemies;
	int		nb_henemies;
}			t_map;

/**
 * struct s_enemies - Contains all the enemies' informations.
 */
typedef struct s_enemies {
	char	*path_up_1;
	char	*path_up_2;
	char	*path_up_3;
	char	*path_down_1;
	char	*path_down_2;
	char	*path_down_3;
	char	*path_left_1;
	char	*path_left_2;
	char	*path_left_3;
	char	*path_right_1;
	char	*path_right_2;
	char	*path_right_3;
	t_img	*img_up_1;
	t_img	*img_up_2;
	t_img	*img_up_3;
	t_img	*img_down_1;
	t_img	*img_down_2;
	t_img	*img_down_3;
	t_img	*img_left_1;
	t_img	*img_left_2;
	t_img	*img_left_3;
	t_img	*img_right_1;
	t_img	*img_right_2;
	t_img	*img_right_3;
	t_pos	**pos;
}			t_enemies;

/**
 * struct s_player - Contains all the player's informations.
 */
typedef struct s_player {
	int		pos_x;
	int		pos_y;
	int		inventory;
	int		nb_moves;
}			t_player;

/**
 * struct s_mlx - Contains all useful variables. Used in all functions.
 */
typedef struct s_mlx {
	void		*mlx;
	void		*win;
	int			win_x;
	int			win_y;
	int			idle_frames;
	char		*win_name;
	t_assets	*assets;
	t_map		*map;
	t_enemies	*enemies;
	t_player	*player;
}				t_mlx;

#endif		// ifndef STRUCTURES_H
