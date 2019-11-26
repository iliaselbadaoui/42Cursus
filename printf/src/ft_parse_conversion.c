/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:07:01 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/26 06:57:11 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_print_spaces(int spaces)
{
	while (spaces)
	{
		ft_putchar_fd(' ', 1);
		spaces--;
	}
}

void		ft_parse_conversion(char conv, t_types type)
{
	if ((conv == 'd' || conv == 'i') && !type.err)
		ft_putnbr_fd(type.i, 1);
	else if (conv == 'u' && !type.err)
		ft_putnbr_u_fd(type.ui, 1);
	else if ((conv == 'x' || conv == 'X') && !type.err)
		ft_to_hex(type.ui, conv);
	else if (conv == 'p')
	{
		ft_putstr_fd("0x", 1, 2);
		ft_to_phex(type.ull);
	}
	else if (conv == 'c')
		ft_putchar_fd(type.c, 1);
	else if (conv == 's')
		ft_putstr_fd(type.s, 1, type.zeros);
	else if (conv == '%')
		ft_putchar_fd('%', 1);
	if (type.post_spaces > 0)
		ft_print_spaces(type.post_spaces);
}
