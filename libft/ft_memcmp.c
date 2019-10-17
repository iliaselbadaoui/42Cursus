/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:27:22 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/13 17:27:26 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n)
	{
		if (*((char *)s1) > *((char *)s2))
			return (1);
		else if (*((char *)s1) < *((char *)s2))
			return (-1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
