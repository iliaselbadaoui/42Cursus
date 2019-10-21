/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 00:37:37 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/10 21:31:42 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	iter;
	int		pos;
	int		len;
	int		sizedst;

	iter = 0;
	pos = ft_strlen(dst);
	sizedst = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) < (int)size)
		len = ft_strlen(dst) + ft_strlen(src);
	else
		len = ft_strlen(src) + size;
	while (size - 1 > sizedst + iter && src[iter])
	{
		dst[pos] = src[iter];
		iter++;
		pos++;
	}
	dst[pos] = '\0';
	return ((size_t)len);
}
