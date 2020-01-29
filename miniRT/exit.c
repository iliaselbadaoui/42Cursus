/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:27:45 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/28 15:02:58 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

static int		escape_help_iii(int key)
{
	if (key == 91)
	{
		g_data.cam->pos.z += .1;
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	else if (key == 84)
	{
		g_data.cam->pos.z -= .1;
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	return (0);
}

static int		escape_help_ii(int key)
{
	if (key == 125)
	{
		g_data.cam->pos.y -= .1;
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	else if (key == 126)
	{
		g_data.cam->pos.y += .1;
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	escape_help_iii(key);
	return (0);
}

static int		escape_help(int key)
{
	if (key == 124)
	{
		g_data.cam->pos.x += .1;
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	else if (key == 123)
	{
		g_data.cam->pos.x -= .1;
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	escape_help_ii(key);
	return (0);
}

int			escape(int key)
{	
	if (key == 53)
	{
		exit(SUCCESS);
		return (1);
	}
	else if (key == 45)
	{
		get_next_cam(g_object);
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	else if (key == 35)
	{
		get_prev_cam(g_object);
		mlx_clear_window(g_data.mlx.mlx, g_data.mlx.win);
		g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
		raytracer(g_object);
		mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
		return (1);
	}
	escape_help(key);
	return (0);
}

int			close_win(int key)
{
	key = 1;

	exit(SUCCESS);
	return (1);
}
