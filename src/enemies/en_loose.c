/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   en_loose.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:18:55 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/27 21:26:11 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	en_loose(t_mlx *var)
{
	if (var->map->nb_item == var->player->inventory)
		ft_printf("Perdu ! Dommage, tu avais recupere tous les items....\n");
	else
		ft_printf("Perdu ! Dommage, tu avais recupere %d/%d items....\n",
			var->player->inventory, var->map->nb_item);
	var_free(var);
	exit(EXIT_SUCCESS);
}
