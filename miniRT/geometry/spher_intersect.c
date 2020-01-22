/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spher_intersect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 17:44:46 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/22 18:31:03 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

int		spher_intersect(t_spher sp, t_ray ray, double *t)
{
	t_equation	e;
	double		radius;

	radius = sp.diameter / 2;
	e.a = vec_dot(ray.dir, ray.dir);
	e.b = 2 * vec_dot(vec_diff(ray.org, sp.center), ray.dir);
	e.c = vec_dot(vec_diff(ray.org, sp.center), vec_diff(ray.org, sp.center)) -
	pow(radius, 2);
	e.delta = pow(e.b, 2) - 4 * e.a * e.c;
	if (e.delta < 0)
		return (0);
	else
	{
		e.s0 = (-e.b - sqrt(e.delta)) / 2 * e.a;
		e.s1 = (-e.b + sqrt(e.delta)) / 2 * e.a;
		*t = (e.s0 < e.s1) ? e.s0 : e.s1;
		return (1);
	}
}
