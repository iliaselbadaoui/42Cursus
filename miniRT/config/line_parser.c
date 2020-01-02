/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 18:08:33 by ielbadao          #+#    #+#             */
/*   Updated: 2020/01/01 19:05:07 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"

int		match_type(t_string type)
{
	t_string arr[] = ["R", "A",
					  "sp", "pl",
					  "tr", "cy",
					  "sq","c",
					  "l", "0"];
	while (arr)
	{
		if (!equals(type, *arr))
			return (0);
	}
	return (1);
}

t_object	*line_parser(t_string line)
{
	t_string	*components;
	t_object	*obj;

	components = ft_split(line, ' ');
	if (!match_type(*components))
	{
		perror("Undefined type.");
		exit(FAILURE);
	}
	return (obj);
}
