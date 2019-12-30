/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_intersections.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 11:25:16 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/26 18:37:10 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

t_result	check_intersections(t_object lst, t_ray ray, double *t)
{
	double		closest;
	double		solution;
	t_result	res;
	t_result	final;

	closest = 20000;
	while (lst.next)
	{
		res = check_object(lst,ray, &solution);
		if (solution < closest)
		{
			closest = solution;
			final = res;
			printf("white");
		}
		lst = *(lst.next);
	}
	*t = closest;
	return  (final);
}
