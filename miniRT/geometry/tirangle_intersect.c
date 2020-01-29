/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tirangle_intersect.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:28:29 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/28 21:45:21 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

static  t_tirangle_solve    init_ts(t_triangle tr, t_ray ray)
{
	 t_tirangle_solve    ts;

	ts.p1p2 = vec_diff(tr.p2, tr.p1);
	ts.p1p3 = vec_diff(tr.p3, tr.p1);
	ts.N = vec_cross(ts.p1p2, ts.p1p3);
	ts.NdotRayDirection = vec_dot(ray.dir, ts.N);
	ts.d = vec_dot(ts.N, tr.p1);
	return (ts);
}

int							tirangle_intersect(t_triangle tr, t_ray ray,
double *t)
{
	t_tirangle_solve    ts;
	double              a;
	double              b;

	ts = init_ts(tr, ray);
	if (double_abs(ts.NdotRayDirection) < 1e-6)
		return (0);
	*t = vec_dot(ts.N, ray.org) + ts.d; 
	if (*t < 0)
		return (0);
	ts.point = vec_add(ray.org, vec_times_double(ray.dir, *t));
	a = tr.p1.x * (tr.p2.y - tr.p1.y) + (ts.point.y - tr.p1.y) *
	(tr.p2.x - tr.p1.x) - ts.point.x * (tr.p2.y - tr.p1.y);
	a /= (tr.p3.y - tr.p1.y) * (tr.p2.x - tr.p1.x) -
	(tr.p3.x - tr.p1.x) * (tr.p2.y - tr.p1.y);
	b = ts.point.y - tr.p1.y - (a * (tr.p3.y - tr.p1.y));
	b /= tr.p2.y - tr.p1.y;
	if (a >= 0 && b >= 0 && a + b <= 1)
		return (1);
	return (0);
}
