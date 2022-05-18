/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:38:19 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/16 15:15:36 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_mlx	vars;

	p_main(argc, argv);
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 300, 300, "Hello world!");
	mlx_key_hook(vars.win, event_esc, &vars);
	mlx_loop(vars.mlx);
	return (EXIT_SUCCESS);
}
