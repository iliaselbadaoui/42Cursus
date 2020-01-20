/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phong.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 14:07:33 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/20 21:07:25 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"
#include "../minirt.h"

static t_rgb	phong_diffuse(t_light light, t_rgb col, double dot)
{
	t_rgb	res;

	res.r = clamp_rgb(0, (col.r + light.color.r) * light.range, 255);
	res.g = clamp_rgb(0, (col.g + light.color.g) * light.range, 255);
	res.b = clamp_rgb(0, (col.b + light.color.b) * light.range, 255);
	dot = max(0, dot);
	res.r *= dot;
	res.g *= dot;
	res.b *= dot;
	return (res);
}

static t_rgb	phong_ambient(t_ambient amb, t_rgb col)
{
	t_rgb	res;

	res.r = clamp_rgb(0, (col.r + amb.color.r) * amb.range, 255);
	res.g = clamp_rgb(0, (col.g + amb.color.g) * amb.range, 255);
	res.b = clamp_rgb(0, (col.b + amb.color.b) * amb.range, 255);
	return (res);
}

void			phong(t_lights *lst, t_result res, t_img_point point)
{
	t_ray	shadow;
	t_vec	hp;
	double	dot;
	t_rgb	col;

	while (lst)
	{
		hp = vec_add(lst->content->pos, res.pi);
		dot = vec_dot(res.normal, normalize_vect(hp));
		shadow = ray_init(lst->content->pos, hp);
		if(!(check_intersections(g_object, shadow).flag))
			col = phong_diffuse(*lst->content, res.color, dot);
		lst = lst->next;
	}
	col = add_rgb(col, phong_ambient(g_data.amb, res.color));
	put_pixel(point.x, point.y, rgb_to_int(col));
}
