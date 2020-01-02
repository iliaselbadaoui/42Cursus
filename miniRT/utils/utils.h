/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 15:34:39 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/02 01:13:47 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../types.h"
# include <stdlib.h>
# include <math.h>

int			equals(t_string s1, t_string s2);
void		add_object_node(t_object *head, t_object *new);
t_object	*create_object_node(t_string type, void *content);
t_object	*get_before_last(t_object *head);
double		double_abs(double d);
double		deg_to_rad(int deg);
void		ft_free(char **p);
#endif
