/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 10:57:35 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/26 18:50:23 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef char *string;
typedef struct	s_equation
{
	double	a;
	double	b;
	double	c;
	double	delta;
	double	s0;
	double	s1;
}				t_equation;
typedef struct	s_rgb
{
	unsigned short	g;
	unsigned short	r;
	unsigned short	b;
}				t_rgb;
typedef struct	s_vec
{
	double	x;
	double	y;
	double	z;
}				t_vec;
typedef struct	s_ray
{
	t_vec	org;
	t_vec	dir;
}				t_ray;

typedef struct	s_spher
{
	t_vec	center;
	t_rgb	color;
	double	diameter;
}				t_spher;
typedef struct	s_camera
{
	t_vec	pos;
	t_vec	normal;
	int		fov;
}				t_camera;
typedef struct	s_object
{
	string			type;
	void			*content;
	struct s_object	*next;
}				t_object;
typedef struct	s_light
{
	t_vec	pos;
	float	range;
	t_rgb	color;
}				t_light;
typedef struct	s_result
{
	int		flag;
	t_rgb	color;
}				t_result;
#endif
