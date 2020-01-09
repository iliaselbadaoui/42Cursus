/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rgb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:35:59 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/09 18:20:53 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_rgb		fill_rgb(t_string rgb)
{
	t_string	*parts;
	t_rgb		res;

	parts = ft_split(rgb, ',');
	if (object_props_count(parts) != 3)
	{
		free_2d(&parts);
		errcode(1);
	}
	else if (is_number(parts[0]) == 1 && is_number(parts[1]) == 1 &&
			is_number(parts[2]) == 1)
	{
		res.r = ft_atoi(parts[0]);
		res.g = ft_atoi(parts[1]);
		res.b = ft_atoi(parts[2]);
		if (!is_in_range(0, res.r, 255) || !is_in_range(0, res.g, 255) ||
			!is_in_range(0, res.b, 255))
			errcode(5);
	}
	else
	{
		free_2d(&parts);
		errcode(2);
	}
	free_2d(&parts);
	return (res);
}
