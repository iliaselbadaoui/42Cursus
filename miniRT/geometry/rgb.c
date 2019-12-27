/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 16:01:04 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/26 20:22:15 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

int		rgb_to_int(t_rgb rgb)
{
	return ((rgb.r * 256 * 256) + (rgb.g * 256) + rgb.b);
}

t_rgb	rgb_times_double(t_rgb rgb, double d)
{
	rgb.r *= d;
	rgb.g *= d;
	rgb.b *= d;
	return (rgb);
}
