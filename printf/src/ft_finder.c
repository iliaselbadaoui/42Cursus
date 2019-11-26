/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 20:59:42 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/22 10:38:27 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	ft_finder(char *format, t_format_container *container)
{
	container->start = format;
	while (*format)
	{
		if (ft_match_conversion(*format))
		{
			container->end = format;
			return (*format);
		}
		format++;
	}
	return (0);
}
