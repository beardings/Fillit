/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:00:35 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 19:45:36 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_block		move_r(t_block block)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		block.x[i] += 1;
		i++;
	}
	block.move[0] = -1;
	return (block);
}
