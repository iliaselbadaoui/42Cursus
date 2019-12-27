/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_object.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 14:54:39 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/26 17:51:20 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

t_result	check_object(t_object lst, t_ray ray, double *solution)
{
	double		t;
	t_result	res;

	t = INFINITY;
	if (equals(lst.type, "spher"))
	{
		res.flag = spher_intersect(*((t_spher *)lst.content), ray, &t);
		res.color = (*((t_spher *)lst.content)).color;
		*solution = t;
	}
	return (res);
}