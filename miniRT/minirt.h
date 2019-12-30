/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 18:22:01 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/30 16:45:05 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MINIRT_H
# define MINIRT_H

# include<mlx.h>
# include "libft/libft.h"
# include "geometry/geometry.h"
# include "types.h"

void			raytracer(t_camera cam, t_resolution resolution, t_mlx mlx);
int				escape(int key, t_mlx *mlx);
int				close_win(int key, t_mlx *mlx);
void			manage_window(t_mlx mlx);
#endif