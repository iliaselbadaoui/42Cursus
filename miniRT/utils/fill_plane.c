/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_plane.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:34:59 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/09 15:55:32 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_generic		fill_plane(t_string *props)
{
	t_generic	res;

	if (object_props_count(props) != 3)
		errcode(1);
	res.plane = (t_plane *)malloc(sizeof(t_plane));
	res.plane->point = fill_vec(props[0]);
	res.plane->normal = fill_vec(props[1]);
	res.plane->color = fill_rgb(props[2]);
	return (res);
}
