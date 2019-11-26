/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:08:52 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/22 10:33:28 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_fill_types(void *data, t_types *types, char conv)
{
	if (conv == 'd' || conv == 'i')
		types->i = *((int *)data);
	else if (conv == 'u' || conv == 'x' || conv == 'X')
		types->ui = *((unsigned int *)data);
	else if (conv == 'p')
		types->ull = *((size_t *)data);
	else if (conv == 's')
		types->s = ((char *)data);
	else if (conv == 'p')
		types->c = *((char *)data);
}
