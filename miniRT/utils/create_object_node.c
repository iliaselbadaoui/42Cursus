/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_object_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 18:13:31 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/01 18:48:51 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_object	*create_object_node(t_string type, void *content)
{
	t_object	*node;

	node = (t_object *)malloc(sizeof(t_object));
	node->type = type;
	node->content = content;
	node->next = NULL;
}
