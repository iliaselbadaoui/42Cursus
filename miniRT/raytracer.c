/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raytracer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 15:19:03 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/14 23:30:11 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include <stdio.h>

void	put_pixel(void *img, int x, int y, int color, int width);
// make the fucking plane today and print the funcking shadows
void	raytracer(t_camera cam, t_resolution resolution, t_mlx mlx)
{
	int			x;
	int			y;
	t_result	res;
	t_object	lst;
	t_spher		sp;
	t_ambient	amb;
	t_plane		plane;

	plane.point = vec_init(0, -5, 2);
	plane.normal = vec_init(0, -1, 0);
	plane.color = rgb(139,69,19);
	sp.center = vec_init(0, 2, 6);
	sp.diameter = 2;
	sp.color = rgb(231, 76, 60);
	t_light light;
	light.color.r = 255;light.color.g = 255;light.color.b = 255;
	amb.color.r = 255;amb.color.g = 255;amb.color.b = 255;
	amb.range = .4;
	light.pos = vec_init(20, -20, 20);
	light.range = .6;
	x = 0;
	while (x < resolution.width)
	{
		y = 0;
		while (y < resolution.height)
		{
			t_vec ray_dir = vec_init(x, y, cam.pos.z);
			ray_dir.x = (2 * (x + 0.5)/(double)resolution.width - 1)*tan(deg_to_rad(cam.fov) / 2)*resolution.width/(double)resolution.height;
			ray_dir.y = (1 - 2 * (y + 0.5)/(double)resolution.height)*tan(deg_to_rad(cam.fov) / 2);
			ray_dir.z = cam.pos.z;
			t_ray ray = ray_init(cam.pos, ray_dir);
			double t;
			double r;
			t = INFINITY;
			r = INFINITY;
			spher_intersect(sp, ray, &t);
			plane_intersect(plane, ray, &r);
			if (r < t)
			{
				t_vec pi = vec_add(ray.org,vec_times_double(ray.dir, r));
				t_vec hp = vec_diff(light.pos, pi);
				double dot = vec_dot(plane.normal, normalize_vect(hp));
				// printf("hitpoint : %lf\n", dot);
				if (!spher_intersect(sp, ray_init(light.pos, hp), &t))
				{
					t_rgb col = add_rgb(rgb_times_double(plane.color, light.range*dot), rgb_times_double(plane.color, amb.range));
					put_pixel(mlx.img, x, y, rgb_to_int(col), resolution.width);
				}
				else
				{
					t_rgb col = rgb_times_double(plane.color, amb.range);
					put_pixel(mlx.img, x, y, rgb_to_int(col), resolution.width);
				}
			}
			else if (t < r)
			{
				t_vec pi = vec_add(ray.org,vec_times_double(ray.dir, t));
				t_vec hp = vec_diff(light.pos, sp.center);
				t_vec normal = get_sphers_normal(sp, pi);
				double dot = vec_dot(normalize_vect(normal),normalize_vect(hp));
				// printf("hitpoint : %lf\n", dot);
				t_rgb col = add_rgb(rgb_times_double(sp.color, light.range*dot), rgb_times_double(sp.color, amb.range));
				// printf("rgb(%d, %d, %d)\n", col.r, col.g, col.b);
				put_pixel(mlx.img, x, y, rgb_to_int(col), resolution.width);
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
