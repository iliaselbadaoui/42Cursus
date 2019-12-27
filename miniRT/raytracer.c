/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raytracer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 15:19:03 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/27 21:15:55 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include <stdio.h>

void	put_pixel(void *img, int x, int y, int color, int width);

void	raytracer(t_camera cam, t_resolution resolution, t_mlx mlx)
{
	int			x;
	int			y;
	t_result	res;
	t_object	lst;
	t_spher		sp;

	sp.center.x = 200;sp.center.y = 150;sp.center.z = 10;
	sp.diameter = 200;
	sp.color.r = 241;sp.color.g = 196;sp.color.b = 15;//rgb(241, 196, 15)
	t_light light;
	light.color.r = 255;light.color.g = 255;light.color.b = 255;
	light.pos.x = 200;light.pos.y = 200;light.pos.z = 20;
	x = 0;
	while (x <= resolution.width)
	{
		y = 0;
		while (y <= resolution.height)
		{
			t_ray ray = ray_init(vec_init(x, y, 0),cam.normal);
			double t = INFINITY;
			if (spher_intersect(sp, ray, &t))
			{
				t_vec pi = vec_add(ray.org,vec_times_double(ray.dir, t));
				t_vec hp = vec_diff(light.pos, sp.center);
				t_vec normal = get_sphers_normal(sp, pi);
				double dot = vec_dot(normalize_vect(normal),normalize_vect(hp));
				printf("hitpoint : %lf\n", dot);
				put_pixel(mlx.img, x, y,
				rgb_to_int(rgb_times_double(sp.color,
				double_abs(dot))), resolution.width);
			}
			y++;
		}
		x++;
	}
	
}

void	put_pixel(void *img, int x, int y, int color, int width)
{
	int k;
	int *data;

	data = (int *)mlx_get_data_addr(img, &k, &k, &k);
	data[width * y + x] = color;
}
