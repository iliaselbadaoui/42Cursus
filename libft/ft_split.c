
static int		ft_is_delimiter(char del, char c)
{
	if (del == c)
		return (1);
	else
		return (0);
}

static int		ft_word_count(char const *s, char c)
{
	int wd;
	int rm;

	rm = 0;
	wd = 0;
	while (*s)
	{
		while (ft_is_delimiter(c, *s))
		{
			if (!rm)
			{
				rm = 1;
				wd++;
			}
			s++;
		}
		rm = 0;
		s++;
	}
	return (wd);
}

char			**ft_mem_alloc(char const *s, char c)
{
	char **wds;

	wds = (char **)
}

char			**ft_split(char const *s, char c)
{

}