/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 02:47:39 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/27 02:47:41 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_contain_new_line(char *s, int buffer_size)
{
	int i;

	i = 0;
	while (i < buffer_size)
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

int		ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;

	i = 0;
	if (0 < size)
	{
		while (i < (int)size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return ((size_t)ft_strlen(src));
}

char	*ft_realloc_str(char *ptr, size_t old_size, size_t new_size)
{
	char *help;
	size_t i;

	help = ptr;
	ptr = (char *)malloc(new_size);
	ft_strlcpy(ptr, help, old_size);
	i = 0;
	free(help);
	return ptr;
}
