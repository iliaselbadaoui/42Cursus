/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phong.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 14:07:33 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/18 20:34:59 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"
#include "../minirt.h"

void			phong(t_lights *lst, t_result res, t_ray ray, t_img_point point)
{
	t_ray	shadow;
	t_vec	hp;
	double	dot;
	t_rgb	col;

	col = rgb(0, 0, 0);
	while (lst)
	{
		hp = vec_diff(lst->content->pos, res.pi);
		shadow = ray_init(hp, lst->content->pos);
		dot = vec_dot(res.normal,normalize_vect(hp));
		col = rgb_times_double(res.color, lst->content->range);
		col = add_rgb(col, rgb_times_double(lst->content->color, lst->content->range * dot));
		// printf("amb => %f|light => %f\n", g_data.amb.range, lst->content->range);
		lst = lst->next;
	}
	col = add_rgb(col, rgb_times_double(g_data.amb.color, g_data.amb.range));
	// printf("col => %d\n", rgb_to_int(col));
	put_pixel(point.x, point.y, rgb_to_int(col));
}
