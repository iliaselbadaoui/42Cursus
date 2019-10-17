/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:45:26 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/12 00:32:46 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_equals(const char *haystack, const char *needle)
{
	char *res;

	res = NULL;
	while (*needle && *haystack)
	{
		if ((*needle) - (*haystack) != 0)
			return (0);
		haystack++;
		needle++;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	while (len && *haystack)
	{
		if (*haystack == *needle)
		{
			if (ft_equals(haystack, needle))
				return ((char *)haystack);
		}
		len--;
		haystack++;
	}
	return (NULL);
}
