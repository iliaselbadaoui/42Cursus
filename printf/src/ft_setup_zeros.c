/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup_zeros.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:04:20 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/26 06:19:04 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_setup_zeros(char *start, va_list *args)
{
	int res;

	if (*start == '*')
		return (va_arg(*args, int));
	else
	{
		res = ft_atoi(start);
	}
	return (res);
}
