/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 02:47:19 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/27 02:47:23 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char *remaining;
	char *read_res;
	size_t len;
	size_t times;

	times = 0;
	while (read(fd, read_res, BUFFER_SIZE))
	{
		len = ft_contain_new_line(read_res, BUFFER_SIZE);
		*line = ft_realloc_str(*line, times * BUFFER_SIZE,
							   (times * BUFFER_SIZE) + len);
		if (!times)
			ft_strlcpy(*line, read_res, len);
		else
			ft_strlcat(*line, read_res, (times * BUFFER_SIZE) + len);
		if (len > BUFFER_SIZE)
			break;
		times++;
	}
	return (0);
}
