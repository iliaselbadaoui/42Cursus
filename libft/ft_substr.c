/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:58:01 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/14 20:58:04 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;

	res = ft_strdup(s + start);
	res[len] = '\0';
	return (res);
}
