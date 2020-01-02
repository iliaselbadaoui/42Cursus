/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raytracer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 15:19:03 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/31 13:55:29 by ielbadao         ###   ########.fr       */
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

	sp.center.x = 300;sp.center.y = 300;sp.center.z = 100;
	sp.diameter = 400;
	sp.color = rgb(255, 7, 7);
	t_light light;
	light.color.r = 255;light.color.g = 255;light.color.b = 255;
	amb.color.r = 255;amb.color.g = 255;amb.color.b = 255;
	amb.range = .2;
	light.pos = vec_init(100, 150, 0);
	light.range = .6;
	x = 0;
	while (x <= resolution.width)
	{
		y = 0;
		while (y <= resolution.height)
		{
			t_ray ray = ray_init(vec_init(x, y, cam.pos.z), vec_init(0,0,1));
			double t;
			if (spher_intersect(sp, ray, &t))
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
