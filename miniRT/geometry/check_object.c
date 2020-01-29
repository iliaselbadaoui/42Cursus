/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_object.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 14:54:39 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/28 16:04:39 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

void	check_object(t_object lst, t_ray ray, double *solution, t_result *res)
{
	double		t;

	t = INFINITY;
	res->dir = ray.dir;
	if (equals(lst.type, "sp"))
	{
		res->flag = spher_intersect(*(lst.content.sp), ray, solution);
		res->color = lst.content.sp->color;
		res->sol = *solution;
		if (res->flag)
		{
			res->type = "sp";
			res->pi = vec_add(ray.org,vec_times_double(ray.dir, *solution));
			res->normal = normalize_vect(get_sphers_normal(*(lst.content.sp),
			res->pi));
		}
	}
	else if (equals(lst.type, "pl"))
	{
		res->flag = plane_intersect(*(lst.content.plane), ray, solution);
		res->color = (*(lst.content.plane)).color;
		res->sol = *solution;
		if (res->flag)
		{
			res->type = "pl";
			res->pi = vec_add(ray.org,vec_times_double(ray.dir, *solution));
			res->normal = (*(lst.content.plane)).normal;
		}
	}
	else if (equals(lst.type, "tr"))
	{
		res->flag = tirangle_intersect(*(lst.content.tr), ray, solution);
		res->color = lst.content.tr->color;
		res->sol = *solution;
		if (res->flag)
		{
			res->type = "tr";
			res->pi = vec_add(ray.org,vec_times_double(ray.dir, *solution));
			res->normal = vec_cross(vec_diff(lst.content.tr->p2,
			lst.content.tr->p1), vec_diff(lst.content.tr->p3,
			lst.content.tr->p1));
		}
	}
}