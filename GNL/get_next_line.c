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

void	ft_help(t_string *line, t_string *buffer)
{
	t_string	hlp;
	if(*line)
	{
		hlp = *line;
		*line = ft_strjoin(*line, *buffer);
		ft_free(&hlp);
	}
	else
		*line = ft_strdup(*buffer);
}

int		ft_fill(t_string *remain, t_string *line)
{
	t_string	nl;

	if((nl = ft_strchr(*line, '\n')))
	{
		*nl = '\0';
		*remain = ft_strdup(nl + 1);
		return (1);
	}
	return (0);
}

int		ft_manage(t_string *remain, t_string *line)
{
	t_string	nl;
	t_string	tmp;
	t_string	tmpL;

	if((nl = ft_strchr(*remain, '\n')))
	{
		tmp = *remain;
		*nl = '\0';
		tmpL = *line;
		*line = ft_strdup(*remain);
		ft_free(&tmpL);
		*remain = ft_strdup(nl + 1);
		ft_free(&tmp);
		return (1);
	}
	else
	{
		tmpL = *line;
		*line = ft_strdup(*remain);
		ft_free(&tmpL);
		ft_free(remain);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static t_string	remain[256];
	t_string		buffer;
	int				bytes;

	if (!(buffer = (t_string)malloc(BUFFER_SIZE + 1)) ||
		read(fd, NULL, 0) || fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	*line = strdup("");
	if (remain[fd] && ft_manage(&remain[fd], line))
	{
		ft_free(&buffer);
		return (1);
	}
	while((bytes = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[bytes] = '\0';
		ft_help(line, &buffer);
		if (ft_fill(&remain[fd], line))
		{
			ft_free(&buffer);
			return (1);
		}
	}
	ft_free(&buffer);
	return  (0);
}
