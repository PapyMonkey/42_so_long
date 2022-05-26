/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_args_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:29:38 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/17 17:34:07 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_args_check(int argc, char **argv)
{
	int	len;

	if (argc != 2)
	{
		ft_printf("Mauvais nombre d'arguments.");
		exit(EXIT_FAILURE);
	}
	len = ft_strlen(argv[1]);
	if (len < 5)
		exit(EXIT_FAILURE);
	if (ft_strncmp(argv[1] + (len - 4), ".ber", 4))
	{
		ft_printf("pas bon les frrrr\n");
		exit(EXIT_FAILURE);
	}
}
