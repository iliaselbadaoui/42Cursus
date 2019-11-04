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

t_string		ft_get_remain_and_result(t_string *read_res)
{
	int			nl_pos;
	t_string	remain;

	nl_pos = ft_contains_new_line(*read_res);
	(*read_res)[nl_pos] = '\0';
	remain = *read_res + nl_pos + 1;
	return (remain);
}

int				ft_manage_remain(t_string *line, t_string *read_res, t_string *remain)
{
	if(*remain)
	{
		*read_res = *remain;
		*remain = ft_get_remain_and_result(read_res);
		*line = ft_strjoin(*line, *read_res);
		if (ft_contains_new_line(*remain) < ft_strlen(*read_res))
			return (1);
		else if (ft_contains_new_line(*remain) == ft_strlen(*read_res))
		{
			*line = ft_strjoin(*line, *remain);
			remain = 0;
			return (0);
		}
	}
	return (-1);
}

int				get_next_line(int fd, char **line)
{
	static t_string	remain;
	t_string		read_res;
	int				nl_pos;
	int				bytes;
	
	if (fd < 0 || !line)
		return (-1);
	read_res = (t_string)malloc(BUFFER_SIZE + 1);
	*line = (t_string)malloc(1);
	if (remain)
	{
		if ((ft_manage_remain(line,&read_res, &remain)))
			return (1);
	}
	while ((bytes = read(fd, read_res, BUFFER_SIZE)))
	{
		read_res[bytes] = '\0';
		nl_pos = ft_contains_new_line(read_res);
		if (nl_pos < ft_strlen(read_res))
			remain = ft_get_remain_and_result(&read_res);
		*line = ft_strjoin(*line, read_res);
		if (remain)
			break;
	}
	return ((bytes > 0) ? 1 : 0);
}
