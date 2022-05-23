/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:52:10 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/23 05:31:27 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "structures.h"

// ****************************************************************************
// Functions - Player related

void		pl_get_pos(t_player *player, t_mlx *var);

t_player	*pl_init(t_mlx *var);

void		pl_move_up(t_mlx *var);

void		pl_move_down(t_mlx *var);

void		pl_move_left(t_mlx *var);

void		pl_move_right(t_mlx *var);

#endif		// ifndef PLAYER_H
