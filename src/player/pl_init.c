/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:54 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:27:22 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_player	*pl_init(t_mlx *var)
{
	t_player	*player;

	player = malloc(sizeof(t_player));
	if (!player)
		error_put_exit();
	pl_get_pos(player, var);
	return (player);
}
