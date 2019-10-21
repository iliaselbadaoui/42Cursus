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

#include "libft.h"

static int	ft_equals(const char *haystack, const char *needle, size_t *len)
{
	while (*needle && *haystack && (*len)--)
	{
		if (*(needle + 1) && !*(haystack + 1))
			return (0);
		else if (*needle - *haystack != 0)
			return (0);
		haystack++;
		needle++;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!ft_strlen((char *)needle))
		return ((char *)haystack);
	while (len && *haystack)
	{
		if (ft_equals(haystack, needle, &len))
			return ((char *)haystack);
		if (len)
			len--;
		haystack++;
	}
	return (NULL);
}
