/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 16:14:19 by ielbadao          #+#    #+#             */
/*   Updated: 2020/03/07 17:48:30 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_collect.h"
#include<stdio.h>
int		safe_free(void *ptr)
{
	t_collection	*ptr_holder;
	t_collection	*tmp;

	tmp = g_collection;
	if (g_collection->data == ptr)
	{
		g_collection = g_collection->next;
		free(ptr);
		free(tmp);
		return (SUCCESS);
	}
	while (tmp->next->data != ptr)
		tmp = tmp->next;
	if (tmp->next)
	{
		ptr_holder = tmp->next;
		tmp->next = ptr_holder->next;
		free(ptr);
		free(ptr_holder);
		return (SUCCESS);
	}
	else
		return (FAIL);
}
