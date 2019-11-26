/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:40:03 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/23 18:41:06 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_init_types(t_types *types)
{
	types->post_spaces = 0;
	types->zeros = 0;
	types->err = 1;
	types->i = 0;
	types->ui = 0;
	types->ull = 0;
	types->s = 0;
	types->c = 0;
}
