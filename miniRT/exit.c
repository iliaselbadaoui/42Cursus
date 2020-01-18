/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:27:45 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/18 20:28:57 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int		escape(int key, t_mlx *mlx)
{
	if (key == 53)
	{
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx_destroy_window(mlx->mlx, mlx->win);
		exit(SUCCESS);
		return (1);
	}
	// else if (key == 124)
	// {
	// 	(g_data.cam->pos.x)++;
	// 	mlx_clear_window(mlx->mlx, mlx->win);
	// 	mlx_destroy_image(g_data.mlx.mlx, g_data.mlx.img);
	// 	raytracer(g_object);
	// 	mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
	// 	return (1);
	// }
	// else if (key == 123)
	// {
	// 	(g_data.cam->pos.x)--;
	// 	mlx_destroy_image(g_data.mlx.mlx, g_data.mlx.img);
	// 	raytracer(g_object);
	// 	g_data.mlx.img = mlx_new_image(g_data.mlx.mlx, g_data.res.width, g_data.res.height);
	// 	mlx_put_image_to_window(g_data.mlx.mlx, g_data.mlx.win, g_data.mlx.img, 0, 0);
	// 	return (1);
	// }
	return (0);
}

int		close_win(int key, t_mlx *mlx)
{
	mlx_destroy_image(mlx->mlx, mlx->img);
	mlx_destroy_window(mlx->mlx, mlx->win);
	exit(SUCCESS);
	return (1);
}
