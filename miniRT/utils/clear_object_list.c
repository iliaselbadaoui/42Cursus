/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_object_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 01:12:07 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/02 01:18:30 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	clear_object_list(t_object *head)
{
	t_object	*tmp;

	while ((tmp = get_before_last(head)) != head)
	{
		ft_free(&(tmp->content));
		ft_free(&tmp);
	}
	ft_free(&(tmp->content));
	ft_free(&tmp);
}
