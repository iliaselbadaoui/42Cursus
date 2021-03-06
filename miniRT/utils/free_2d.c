/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_2d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 10:32:10 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/10 15:40:20 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	free_2d(t_string **arr)
{
	t_string	*tmp;

	tmp = *arr;
	while (*tmp)
	{
		free(*tmp);
		(tmp)++;
	}
	free(*arr);
}
