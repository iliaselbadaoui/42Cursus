/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:58:46 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/30 16:33:46 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void		manage_window(t_mlx mlx)
{
	mlx_hook(mlx.win, 2, 1L<<0, escape, &mlx);
	//mlx_hook(mlx.win, 17, 1L<<17, close_win, &mlx);
}
