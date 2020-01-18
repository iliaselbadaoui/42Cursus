/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_light_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:44:31 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/18 16:45:36 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_lights		*get_light_list(t_object *head)
{
	t_lights	*light_head;
	t_lights	*lst;

	light_head = NULL;
	while (head)
	{
		if (equals(head->type, "l"))
		{
			if (!light_head)
			{
				light_head = (t_lights *)malloc(sizeof(t_lights));
				light_head->content = head->content.light;
				light_head->next = NULL;
				lst = light_head;
			}
			else
			{
				lst->next = (t_lights *)malloc(sizeof(t_lights));
				lst = lst->next;
				lst->content = head->content.light;
				lst->next = NULL;
			}
		}
		head = head->next;
	}
	return (lst);
}
