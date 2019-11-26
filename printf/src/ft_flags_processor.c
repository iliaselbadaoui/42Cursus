/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_processor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:55:13 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/26 16:21:07 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_types	ft_flags_processor(t_format_container container, va_list *args,
		int *len)
{
	t_types types;

	ft_init_types(&types);
	while (container.start != container.end)
	{ 
		if (*(container.start) == '*' || ((*(container.start) > '0' &&
			*(container.start) <= '9')))
			return (ft_star_flag(&container, args, len));
		if (*(container.start) == '0' && ((*(container.start + 1) >= '0' &&
			*(container.start + 1) <= '9') || *(container.start + 1) == '*'))
			return (ft_zero_flag(container, args, len));
		if (*(container.start) == '.' && ((*(container.start + 1) >= '0' &&
			*(container.start + 1) <= '9') || *(container.start + 1) == '*'))
			return (ft_point_flag(container, args, len));
		(container.start)++;
	}
	if ((container.start) == (container.end))
	{
		return (ft_get_arg_value(*(container.end), args, len));
	}
	return (types);
}
