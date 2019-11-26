/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:57:51 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/26 06:56:12 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_print_zeros(int len)
{
	while (len)
	{
		ft_putchar_fd('0', 1);
		len--;
	}
}

void		ft_check_zeros(char conv, int zeros, t_types *res, int *len)
{
	int nb_len;

	if (conv == 'd' || conv == 'i' || conv == '%')
		nb_len = ft_nb_length(res->i);
	else if (conv == 'u')
		nb_len = ft_nb_length(res->ui);
	else if (conv == 's')
	{
		nb_len = ft_strlen(res->s);
		if (zeros == 0)
			res->zeros = 0;
		else if ((zeros - nb_len) == 0)
			res->zeros = nb_len;
		else if ((zeros - nb_len) < 0)
			res->zeros = ft_abs(zeros);
		else
			res->zeros = ft_abs(nb_len);
		*len += res->zeros;
		return ;
	}
	else
		nb_len = ft_hex_len(res->ui);
	if (conv != 's' && (zeros = zeros - nb_len) > 0)
	{
		ft_print_zeros(zeros);
		*len += zeros + nb_len;
	}
	else if (conv != 's')
		*len += nb_len;
}

t_types		ft_zero_flag(t_format_container container, va_list *args, int *len)
{
	int		zeros;
	va_list	tmp;
	t_types	res;

	res.conv = *(container.end);
	ft_init_types(&res);
	if (ft_match_conversion(res.conv) && res.conv != 'p' && res.conv != 's' &&
		res.conv != 'c' && res.conv != '%')
	{
		res.err = 0;
		zeros = ft_setup_zeros(container.start + 1, args);
		printf("|len == %d|", zeros);
		if (zeros < 0)
		{
			ft_process_post_spaces(&res, args, zeros, len);
			*len += ft_type_len(res);
			return (res);
		}
		else if (zeros == 0)
		{
			va_copy(tmp, *args);
			if (va_arg(*args, int) == 0)
				res.err=1;
			return (res);
		}
		ft_help(&res, args, zeros, len);
	}
	return (res);
}
