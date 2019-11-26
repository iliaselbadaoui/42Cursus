/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 11:42:05 by ielbadao          #+#    #+#             */
/*   Updated: 2019/11/25 14:45:44 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_types
{
	char			conv;
	int				post_spaces;
	int				zeros;
	int				err;
	int				i;
	unsigned int	ui;
	size_t			ull;
	char			*s;
	char			c;
}				t_types;
typedef struct	s_format_container
{
	char	*start;
	char	*end;
}				t_format_container;
int				ft_atoi(const char *str);
unsigned int	ft_abs(int val);
int				ft_type_len(t_types res);
void			ft_init_types(t_types	*types);
int				ft_match_conversion(char conv);
void			ft_print_zeros(int len);
void			ft_check_zeros(char conv, int zeros, t_types *res, int *len);
void			ft_help(t_types *res, va_list *args, int zeros,
				int *len);
t_types			ft_flags_processor(t_format_container container, va_list *args,
				int *len);
t_types			ft_star_flag(t_format_container *container,
				va_list *args, int *len);
t_types			ft_zero_flag(t_format_container container,
				va_list *args, int *len);
t_types			ft_point_flag(t_format_container container,
				va_list *args, int *len);
t_types			ft_get_arg_value(char conv, va_list *args, int *len);
int				ft_setup_zeros(char *start, va_list *args);
void			ft_process_post_spaces(t_types *res, va_list *args,
				int zeros, int *len);
char			ft_finder(char *format, t_format_container *container);
void			ft_print_spaces(int spaces);
void			ft_fill_types(void *data, t_types *types, char conv);
void			ft_parse_conversion(char conv, t_types types);
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
