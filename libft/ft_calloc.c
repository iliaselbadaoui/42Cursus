/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 02:22:55 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/14 02:22:58 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*area;
	int		n;

	n = 0;
	if ((area = (void *)malloc(count * size)))
	{
		while ((size_t)n < count)
		{
			((long *)area)[n] = 0;
			n++;
		}
	}
	return (area);
}
