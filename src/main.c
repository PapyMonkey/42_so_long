/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:38:19 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:32:36 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	close_custom(void)
{
	exit(EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	t_mlx	var;
	char	*filepath;

	// filepath = "assets/2D_pixel_dungeon/Character_animation/monsters_idle"
	// 		"/skull/v2/skull_v2_1.png";
	// filepath = "assets/2D_pixel_dungeon/Character_animation/monsters_idle"
	// 		"/skull/v2/skull_v2_1.xpm";
	var.map = p_main(argc, argv);
	var.mlx = mlx_init();
	var.win_x = var.map->size_x * PXL_SIZE;
	var.win_y = var.map->size_y * PXL_SIZE;
	var.win = mlx_new_window(var.mlx, var.win_x, var.win_y, "Hello world!");
	
	sp_background(&var);

	var.player = pl_init(&var);
	sp_player(&var);
	
	mlx_key_hook(var.win, event_main, &var);
	mlx_hook(var.win, 17, 0, close_custom, (void *)0); // Click on red X
	mlx_loop(var.mlx);

	free(var.map);
	free(var.player);
	return (EXIT_SUCCESS);
}
