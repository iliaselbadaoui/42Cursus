/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tirangle_intersect.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:28:29 by ielbadao          #+#    #+#             */
/*   Updated: 2020/02/04 16:55:33 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

static  t_tirangle_solve    init_ts(t_triangle tr, t_ray ray)
{
	 t_tirangle_solve    ts;

	ts.ab = vec_diff(tr.p2, tr.p1);
	ts.bc = vec_diff(tr.p3, tr.p2);
	ts.ca = vec_diff(tr.p1, tr.p3);
	ts.N = vec_cross(ts.ab, ts.bc);
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
	if (double_abs(ts.NdotRayDirection) <= 1e-6)
		return (0);
	*t = vec_dot(ts.N, ray.org) + ts.d; 
	if (*t < 0)
		return (0);
	ts.point = vec_add(ray.org, vec_times_double(ray.dir, *t));
	ts.ap = vec_diff(ts.point, tr.p1);
	ts.bp = vec_diff(ts.point, tr.p2);
	ts.N = vec_times_double(ts.bc, -1);
	ts.N = vec_times_double(ts.N, vec_dot(ts.ab, vec_times_double(ts.bc, -1))/
	vec_dot(vec_times_double(ts.bc, -1), vec_times_double(ts.bc, -1)));
	ts.v = vec_diff(ts.ab, ts.N);
	ts.N = ts.ca;
	ts.N = vec_times_double(ts.N, vec_dot(ts.bc, ts.ca)/vec_dot(ts.ca, ts.ca));
	ts.u = vec_diff(ts.bc, ts.N);
	a = 1 - (vec_dot(ts.v, ts.ap) / vec_dot(ts.v, ts.ab));
	b = 1 - (vec_dot(ts.u, ts.bp) / vec_dot(ts.u, ts.bc));
	if (a >= 0 && b >= 0 && (a + b) <= 1)
		return (1);
	return (0);
}
