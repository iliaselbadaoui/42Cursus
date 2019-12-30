/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 02:47:29 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/30 15:37:13 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H
# define BUFFER_SIZE 100
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include "../types.h"
# include "../libft/libft.h"

void			ft_free(char **p);
void			fill_line(char **line, char *buffer);
int				process_line(char **line, char **remain);
int				process_remain(char **remain, char **line);
int				get_next_line(int fd, char **line);
t_object		*reader(t_string scene);
t_object		*line_parser(t_string line);
#endif
