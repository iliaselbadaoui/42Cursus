/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 06:12:40 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/16 15:04:10 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n && *((unsigned char *)src))
	{
		*((unsigned char *)dst) = *((unsigned char *)src);
		if (*((unsigned char*)src) == (unsigned char)c)
			return (dst + 1);
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
