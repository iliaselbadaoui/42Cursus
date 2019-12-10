/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:52:35 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/10 20:46:59 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct	s_rgb
{
	int r;
	int g;
	int b;
}				t_rgb;
typedef struct	s_position
{
	float x;
	float y;
	float z;
}				t_position;
typedef struct	s_resolution
{
	int height;
	int width;
}				t_resolution;
typedef struct	s_camera
{
	t_position	pos;
	int			fov;
	t_position	orientation;
}				t_camera;
typedef struct	s_amb_light
{
	t_rgb	rgb;
	float	range;
}				t_amb_light;
typedef struct	s_light
{
	t_position	pos;
	t_rgb		rgb;
	float		range;
}				t_light;
typedef struct	s_spher
{
	t_position	pos;
	t_rgb		rgb;
	float		diameter;
}				t_spher;
typedef struct	s_plane
{
	t_position	pos;
	t_rgb		rgb;
	t_position	orientation;
}				t_plane;
typedef struct	s_square
{
	t_position	pos;
	t_rgb		rgb;
	t_position	orientation;
	float		side;
}				t_square;
typedef struct	s_cylindre
{
	t_position	pos;
	t_rgb		rgb;
	t_position	orientation;
	float		height;
	float		diameter;
}				t_cylindre;
typedef struct	s_triange
{
	t_position	first;
	t_position	second;
	t_position	third;
	t_rgb		rgb;
}				t_triange;
#endif
