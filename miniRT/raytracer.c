/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raytracer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 15:19:03 by ielbadao          #+#    #+#             */
/*   Updated: 2020/02/04 17:10:00 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include <stdio.h>

void				put_pixel(int x, int y, int color)
{
	int k;
	int *data;

	data = (int *)mlx_get_data_addr(g_data.mlx.img, &k, &k, &k);
	data[g_data.res.width * y + x] = color;
}

static t_vec	implement_fov(int x, int y)
{
	t_vec 			ray;
	t_vec			dir;
	t_resolution	res;
	t_rotation		rot;

	dir = g_data.cam->normal;
	res = g_data.res;
	rot.ro = vec_distance(g_data.cam->pos, dir);
	rot.phi = atan(dir.x / dir.z);
	rot.teta = acos(dir.y / rot.ro);
	ray.x = (2 * (x + 0.5)/(double)res.width - 1)*
			tan(deg_to_rad(g_data.cam->fov / 2))*res.width/
			(double)res.height;
	ray.y = (1 - 2 * (y + 0.5)/(double)res.height)*
	tan(deg_to_rad(g_data.cam->fov / 2));
	ray.z = dir.z;
	ray = y_rotation(ray, rot.teta);
	ray = x_rotation(ray, rot.phi);
	return (ray);
}

void				raytracer(t_object *head)
{
	int			x;
	int			y;
	t_result	res;
	t_ray		ray;

	x = 0;
	if (g_data.cam)
	{
		while (x < g_data.res.width)
		{
			y = 0;
			while (y < g_data.res.height)
			{
				ray = ray_init(g_data.cam->pos, normalize_vect(
				implement_fov(x, y)));
				res = check_intersections(head, ray, NULL);
				if (res.flag)
					phong(g_data.lst, res, init_imgpoint(x, y));
				y++;
			}
			x++;
		}
	}
}
