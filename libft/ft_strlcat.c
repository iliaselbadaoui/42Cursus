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

int		ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int iter;
	int pos;
	int len;

	iter = 0;
	pos = ft_strlen(dst);
	if (ft_strlen(dst) <= (int)size)
	{
		len = ft_strlen(dst) + ft_strlen(src);
		while (iter < ((int)size) - ft_strlen(dst))
		{
			dst[pos] = src[iter];
			iter++;
			pos++;
		}
	}
	else
	{
		len = ft_strlen(src) + size;
		dst[pos] = '\0';
	}
	return (len);
}
