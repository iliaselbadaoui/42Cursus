/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_object_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 01:12:07 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/02 19:50:56 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	clear_object_list(t_object *head)
{
	t_object	*tmp;

	tmp = head;
	while (tmp)
	{
		head = head->next;
		ft_free((void **)&(tmp->content));
		ft_free((void **)&tmp);
		tmp = head;
	}
}
