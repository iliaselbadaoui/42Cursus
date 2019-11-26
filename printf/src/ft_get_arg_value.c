/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:33:59 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/23 16:29:26 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_types		ft_get_arg_value(char conv, va_list *args, int *len)
{
	t_types type;

	ft_init_types(&type);
	if (conv == 'd' || conv == 'i')
		*len += ft_nb_length((type.i = va_arg(*args, int)));
	else if (conv == 'u')
		*len += ft_nb_length((type.ui = va_arg(*args, unsigned int)));
	else if (conv == 'x' || conv == 'X')
		*len += ft_hex_len((type.ui = va_arg(*args, unsigned int)));
	else if (conv == 'p')
		*len += ft_hex_len((type.ull = va_arg(*args, size_t)));
	else if (conv == 'c')
	{
		type.c = va_arg(*args, int);
		*len += 1;
	}
	else if (conv == 's')
	{
		type.s = va_arg(*args, char *);
		*len += (type.zeros = ft_strlen(type.s));
	}
	return (type);
}
