/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_object.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 14:54:39 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/09 18:31:04 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

t_result	check_object(t_object lst, t_ray ray, double *solution)
{
	double		t;
	t_result	res;

	t = INFINITY;
	if (equals(lst.type, "sp"))
	{
		res.flag = spher_intersect(*(lst.content.sp), ray, &t);
		res.color = (*(lst.content.sp)).color;
		*solution = t;
	}
	return (res);
}