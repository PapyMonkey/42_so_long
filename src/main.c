/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:38:19 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 12:54:47 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_mlx	var;
	char	*filepath;

	var_init(&var, argc, argv);
	var.win = mlx_new_window(var.mlx, var.win_x, var.win_y, "Hello world!");
	
	sp_background(&var);
	sp_walls(&var);
	sp_items(&var);
	sp_player(&var);
	
	mlx_key_hook(var.win, event_main, &var);
	mlx_hook(var.win, 17, 0, event_redcross, &var);
	mlx_loop(var.mlx);

	var_free(&var);
	return (EXIT_SUCCESS);
}
