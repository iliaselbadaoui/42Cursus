/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:37:45 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/16 11:44:09 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*new;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	new = (char *)malloc(len * sizeof(char ));
	while (s1 || s2)
	{
		if (s1)
		{
			*new = *s1;
			s1++;
		}
		else
		{
			*new = *s2;
			s2++;
		}
		new++;
	}
	*new = '\0';
	return (new);
}
