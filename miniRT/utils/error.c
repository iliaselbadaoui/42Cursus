/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 12:42:09 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/10 16:23:40 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_string	g_errs[] = {"Error\nundefined type.",
	"Error\nthe number of object's properties is more or less than expected.",
	"Error\nproperty is not a number, [negative value or containing a\40
	floating point (for Resolution and Colors)].",
	"Error\nscene file not found.",
	"Error\nlighting ratio should be in the range [0.0 , 1.0].",
	"Error\nrgb color not int the rang [(0, 0, 0) , (255, 255, 255)].",
	"Error\nduplicated UNIQUE object",
	"Error\nthe field of view should be a positive intger in the range\40
	[0, 180]",
	"Error\nall distances should be of positive values, you piece of shit",
	"Error\nthe normal vector coordinates should be in the range [-1, 1]"};

void		errcode(int code)
{
	perror(g_errs[code]);
	exit(FAILURE);
}