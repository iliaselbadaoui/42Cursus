/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 02:47:29 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/27 02:47:32 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

typedef char *t_string;
void		ft_free(t_string *p);
int			ft_strlen(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
t_string	ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);
void		ft_help(t_string *line, t_string *buffer);
int			ft_fill(t_string *remain, t_string *line);
int			get_next_line(int fd, char **line);
#endif
