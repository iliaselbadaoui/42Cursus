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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len;

	len = ft_strlen(src);
	i = 0;
	if (!size)
		return (0);
	while (*dst != '\0' && i < size)
	{
		dst++;
		i++;
	}
	j = size - i;
	if (j == 0)
		return (i + ft_strlen(src));
	while (*src != '\0' && j != 1)
	{
		*dst++ = *src;
		j--;
		src++;
	}
	*dst = '\0';
	return (i + len);
}
