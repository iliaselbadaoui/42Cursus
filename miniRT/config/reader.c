/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:44:44 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/29 19:23:32 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"

t_object		*reader(t_string scene)
{
	int			fd;
	t_string	line;
	t_object	*head;
	t_object	*body;

	fd  = open(scene, O_RDONLY);
	head = NULL;
	while ((fd = get_next_line(fd, &line)) > 0)
	{
		printf("%s", line);
	}
	return (head);
}
