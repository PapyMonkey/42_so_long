/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:18:46 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 14:36:50 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_put_exit(void)
{
	ft_printf("Error: %s\n", strerror(errno));
	exit(EXIT_FAILURE);
}

void	err_load_assets(t_mlx *var)
{
	if (!var->assets->img_background
			|| !var->assets->img_item
			|| !var->assets->img_player
			|| !var->assets->img_wall)
		error_put_exit();
}
