/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 16:39:28 by ielbadao          #+#    #+#             */
/*   Updated: 2020/02/04 19:04:21 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_generic		fill_square(t_string *props)
{
	t_generic res;

	if (object_props_count(props) != 5)
		errcode(1);
	res.sq = (t_square *)malloc(sizeof(t_square));
	(res.sq)->p1 = fill_vec(props[0]);
	(res.sq)->p2 = fill_vec(props[1]);
	(res.sq)->p3 = fill_vec(props[2]);
	(res.sq)->p4 = fill_vec(props[3]);
	(res.sq)->color = fill_rgb(props[4]);
	return (res);
}
