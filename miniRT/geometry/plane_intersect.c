/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane_intersect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 10:44:41 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/30 19:56:17 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

int			plane_intersect(t_plane plane, t_ray ray, double *t)
{
	t_vec in_plan;
	double dot1;
	double dot2;

	a = vec_diff(plane.point, ray.org);
	dot1 = vec_dot(in_plan, plane.normal);
	dot2 = vec_dot(ray.dir, plane.normal);
	*t = dot1 / dot2;
	if ((*t) != 0)
		return (1);
	return (0);
}
