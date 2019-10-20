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

#include <stdlib.h>

int ft_strlen(const char *str);

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t iter;
	int pos;
	int len;
	int	sizedst;

	iter = 0;
	pos = ft_strlen(dst);
	if (size == 0)
		return (0);
	if (ft_strlen(dst) < (int)size)
	{
		len = ft_strlen(dst) + ft_strlen(src);
	}
	else
		len = ft_strlen(src) + size;
	sizedst = ft_strlen(dst);
	while (size - 1 >  sizedst + iter && src[iter])
	{
		dst[pos] = src[iter];
		iter++;
		pos++;
	}
	dst[pos] = '\0';
	return (len);
}
