/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:54 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 15:04:54 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_player	*pl_init(t_mlx *var)
{
	t_player	*player;

	player = malloc(sizeof(t_player));
	if (!player)
		err_put_exit();
	pl_get_pos(player, var);
	player->inventory = 0;
	player->nb_moves = 0;
	return (player);
}
