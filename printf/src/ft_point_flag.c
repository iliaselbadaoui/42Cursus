/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:30:33 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/26 06:19:22 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_help(t_types *res, va_list *args, int zeros, int *len)
{
	if (res->conv == 'd' || res->conv == 'i')
	{
		res->i = va_arg(*args, int);
		ft_check_zeros(res->conv, zeros, res, len);
	}
	else if (res->conv == 'u' || res->conv == 'x' || res->conv == 'X')
	{
		res->ui = va_arg(*args, unsigned int);
		ft_check_zeros(res->conv, zeros, res, len);
	}
	else if (res->conv == '%')
	{
		res->i = 1;
		ft_check_zeros(res->conv, zeros, res, len);
	}
	else
	{
		res->s = va_arg(*args, char *);
		ft_check_zeros(res->conv, zeros, res, len);
	}
}

void		ft_process_post_spaces(t_types *res, va_list *args,
			int zeros, int *len)
{
	va_list	tmp;

	va_copy(tmp, *args);
	zeros *= -1;
	if (res->conv == 'd' || res->conv == 'i')
		res->post_spaces = (*len += ft_abs(ft_abs(zeros) -
		ft_nb_length((res->i = va_arg(*args, int)))));
	else if (res->conv == 'u')
		res->post_spaces = (*len += ft_abs(ft_abs(zeros) -
		ft_nb_length((res->ui = va_arg(*args, unsigned int)))));
	else if (res->conv == '%')
		res->post_spaces = (*len += ft_abs(ft_abs(zeros) - 1));
	else if (res->conv == 's')
		res->post_spaces = (*len += ft_abs(ft_abs(zeros) - ft_strlen((res->s =
		va_arg(*args, char *)))));
	else if (res->conv == 'c')
		res->post_spaces = (*len += ft_abs(ft_abs(zeros) -
		ft_nb_length((res->c = va_arg(*args, int)))));
	else if (res->conv == 'x' || res->conv == 'X')
		res->post_spaces = (*len += ft_abs(ft_abs(zeros) -
		ft_hex_len((res->ull = va_arg(*args, size_t)))));
	else if (res->conv == 'p')
		res->ull = va_arg(*args, size_t);
	*len += ft_type_len(*res);
	va_copy(*args, tmp);
}

t_types		ft_point_flag(t_format_container container, va_list *args, int *len)
{
	int		zeros;
	t_types	res;

	res.conv = *(container.end);
	ft_init_types(&res);
	if (ft_match_conversion(res.conv) && res.conv != 'p')
	{
		res.err = 0;
		zeros = ft_setup_zeros(container.start + 1, args);
		if (zeros < 0)
		{
			ft_process_post_spaces(&res, args, zeros, len);
			*len += (res.zeros = -res.post_spaces + ft_type_len(res));
			res.post_spaces = 0;
			return (res);
		}
		ft_help(&res, args, zeros, len);
	}
	return (res);
}
