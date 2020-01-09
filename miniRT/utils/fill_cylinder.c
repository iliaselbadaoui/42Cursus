/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_cylinder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:01:49 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/09 17:17:16 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_generic		fill_cylinder(t_string *props)
{
	t_generic res;
	
	if (object_props_count(props) != 5)
		errcode(1);
	res.cy = (t_cylinder *)malloc(sizeof(t_cylinder));
	(res.cy)->point = fill_vec(props[0]);
	(res.cy)->normal = fill_vec(props[1]);
	(res.cy)->diameter = atod(props[2]);
	(res.cy)->height = atod(props[3]);
	if ((res.cy)->diameter < 0 || (res.cy)->height < 0)
	{
		free(res.cy);
		errcode(8);
	}
	(res.cy)->color = fill_rgb(props[4]);
	return (res);
}
