/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 17:33:27 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/23 10:33:16 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int					len;
	va_list				args;
	t_format_container	conatiner;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%' && ft_finder((char *)(format + 1), &conatiner))
		{
			
			format = conatiner.end;
		}
		else
			len += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (len);
}
