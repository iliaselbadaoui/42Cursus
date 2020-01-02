/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:44:44 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/01 19:05:10 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"

t_object		*reader(t_string scene)
{
	int			fd;
	int			res;
	t_string	line;
	t_object	*head;

	fd  = open(scene, O_RDONLY);
	head = NULL;
	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
	}
	printf("%s\n", line);
	if ()
	return (head);
}
