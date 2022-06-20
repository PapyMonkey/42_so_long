/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_enemies.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 07:12:57 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 07:43:39 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sp_print_enemy(t_mlx *var)
{
	int	n;

	n = 0;
	while (var->enemies->pos[n] != NULL)
	{
		mlx_put_image_to_window(var->mlx, var->win,
			var->enemies->pos[n]->img_current,
			var->enemies->pos[n]->x * PXL_SIZE,
			(var->enemies->pos[n]->y + 2) * PXL_SIZE);
		n++;
	}
}
