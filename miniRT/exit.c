/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:27:45 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/30 16:15:57 by ielbadao         ###   ########.fr       */
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
	return (0);
}

int		close_win(int key, t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	exit(SUCCESS);
	return (1);
}