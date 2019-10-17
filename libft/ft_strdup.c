/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 08:10:18 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/13 08:10:20 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*res;

	len = ft_strlen((char *)s1);
	res = malloc((len + 1) * sizeof(char));
	ft_memcpy(res, s1, len + 1);
	return (res);
}
