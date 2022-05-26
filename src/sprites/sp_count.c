/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:31:03 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 00:31:15 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Transform an single digit int into the corresponding sprite.
 *
 * @param var Variable containing all the other useful ones.
 * @param x Digit to be transformed.
 * @return Pointer to the corresponding image.
 */
static t_img	*sp_count_get_nb(t_mlx *var, int x)
{
	if (x == 0)
		return (var->assets->count->img_0);
	else if (x == 1)
		return (var->assets->count->img_1);
	else if (x == 2)
		return (var->assets->count->img_2);
	else if (x == 3)
		return (var->assets->count->img_3);
	else if (x == 4)
		return (var->assets->count->img_4);
	else if (x == 5)
		return (var->assets->count->img_5);
	else if (x == 6)
		return (var->assets->count->img_6);
	else if (x == 7)
		return (var->assets->count->img_7);
	else if (x == 8)
		return (var->assets->count->img_8);
	else if (x == 9)
		return (var->assets->count->img_9);
	else
	{
		ft_printf("Error: wrong move count\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * @brief ft_punbr equivalent, but with sprites.
 *
 * @param var Variable containing all the other useful ones.
 * @param x Number to be transformed.
 * @param n Counter.
 */
static void	sp_count_putnbr(t_mlx *var, int x, int n)
{
	if (x > 9)
		sp_count_putnbr(var, x / 10, n + 1);
	mlx_put_image_to_window(var->mlx, var->win, sp_count_get_nb(var, x % 10),
		var->win_x - 26 - (n * 12), 10);
}

void	sp_print_count(t_mlx *var)
{
	mlx_put_image_to_window(var->mlx, var->win, var->assets->count->img_bg,
		var->win_x - var->assets->count->size_img_bg_x, 0);
	sp_count_putnbr(var, var->player->nb_moves, 0);
}
