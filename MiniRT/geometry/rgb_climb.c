/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb_climb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:03:14 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/28 16:20:55 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

double      climb_rgb(double min, double rgb_shadow, double max)
{
    if (min < rgb_shadow && rgb_shadow < max)
        return (rgb_shadow);
    else if (rgb_shadow < min)
        return (min);
    else
        return (max);
}