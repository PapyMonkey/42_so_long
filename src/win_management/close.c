/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:11:31 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/07 07:13:55 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	event_esc(int key, t_mlx *arg)
{
	if (key == 53)
	{
		mlx_destroy_window(arg->mlx, arg->win);
		exit(EXIT_SUCCESS);
	}
	ft_printf("Key pressed : %d\n", key);
	return (EXIT_FAILURE);
}
