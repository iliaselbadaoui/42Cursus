/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 11:42:05 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/29 10:40:30 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_format_container
{
	char	*start;
	char	*end;
}				t_format_container;
int				ft_atoi(const char *str);
unsigned int	ft_abs(int val);
int				ft_match_conversion(char conv);
char			ft_finder(char *format, t_format_container *container);
int				ft_nb_length(long long int nb);
void			ft_to_hex(unsigned int nb, char flag);
int				ft_strlen(const char *str);
int				ft_hex_len(size_t nb);
void			ft_to_phex(size_t nb);
void			ft_putstr_fd(char *s, int fd, int len);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr_u_fd(unsigned int n, int fd);
int				ft_putchar_fd(char c, int fd);
char			*ft_strchr(const char *s, int c);
int				ft_printf(const char *format, ...);
#endif
