/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:38:43 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/25 14:45:22 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_type_len(t_types res)
{
	if (res.conv == 'd' || res.conv == 'i')
		return (ft_nb_length(res.i));
	else if (res.conv == 'u')
		return (ft_nb_length(res.ui));
	else if (res.conv == 'x' || res.conv == 'X')
		return (ft_hex_len(res.ull));
	else if (res.conv == 'p')
		return (ft_hex_len(res.ull) + 2);
	else if (res.conv == 'c' || res.conv == '%')
		return (1);
	else if (res.conv == 's')
		return (ft_strlen(res.s));
	return (0);
}
