/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 06:02:01 by ielbadao          #+#    #+#             */
/*   Updated: 2019/10/19 06:02:48 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_is_delimiter(char del, char c)
{
	if (del == c)
		return (1);
	else
		return (0);
}

static int		ft_word_count(char const *s, char c)
{
	int wc;
	int rm;

	wc = 0;
	rm = 0;
	while (*s)
	{
		if (!ft_is_delimiter(c, *s) && !rm)
		{
			rm = 1;
			wc++;
		}
		while (ft_is_delimiter(c, *s))
		{
			if (rm)
				rm = 0;
			s++;
		}
		if (rm)
			s++;
	}
	return (wc);
}

static char		**ft_mem_alloc(char const *s, char c)
{
	char		**wds;
	int			wc;
	int			ws;

	wc = 0;
	wds = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char **));
	while (wc < ft_word_count(s, c) + 1)
	{
		ws = 0;
		while (*s && *s != c)
		{
			ws++;
			s++;
		}
		while (*s == c)
			s++;
		if (ws)
		{
			wc++;
			wds[wc - 1] = (char *)malloc((ws + 1) * sizeof(char));
			wds[wc - 1][ws] = 0;
		}
	}
	wds[wc] = NULL;
	return (wds);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		wc;
	int		i;
	int		j;

	wc = 0;
	res = ft_mem_alloc(s, c);
	while (wc < ft_word_count(s, c))
	{
		i = 0;
		j = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			res[wc][j] = s[i];
			j++;
			i++;
		}
		wc++;
	}
	return (res);
}
