char    *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    char *new;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    new = (char *)malloc(len * sizeof(char ));
    while (s1 || s2)
    {
        if (s1)
        {
            new = s1;
            s1++;
        }
        else
        {
            new = s2;
            s2++;
        }  
        new++;
    }
    *new = '\0';
    return (new);
}
