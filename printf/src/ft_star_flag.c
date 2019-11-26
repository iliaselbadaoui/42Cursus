/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:15:42 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/25 12:41:28 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_types		ft_star_flag(t_format_container *container, va_list *args, int *len)
{
	t_types	types;
	int		spaces;
	int		rem;

	rem = 0;
	types.conv = *(container->end);
	if (*(container->start) == '*')
	{
		if ((spaces = va_arg(*args, int)) > 0)
			rem = spaces * -1;
		ft_process_post_spaces(&types, args, rem, len);
	}
	else
	{
		if ((spaces = ft_atoi(container->start)) > 0)
			rem = spaces * -1;
		ft_process_post_spaces(&types, args, rem, len);
	}
	if (spaces > 0)
	{
		ft_print_spaces(types.post_spaces);
		types.post_spaces = 0;
	}
	return (types);
}
