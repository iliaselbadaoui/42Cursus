/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:49:39 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/17 00:39:57 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		n;
	char	*s;
	char	*d;

	n = (int)len;
	s = (char *)src;
	d = (char *)dst;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		s += n - 1;
		d += n - 1;
		while (n)
		{
			*((char *)d) = *((char *)s);
			s--;
			d--;
			n--;
		}
	}
	return (dst);
}
