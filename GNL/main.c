#include "get_next_line.h"

int main()
{
    int fd = open("big.txt", O_RDONLY);
    char *line;
    while(get_next_line(fd, &line))
    {
        printf("%s\n", line);
        ft_free(&line);
    }
    printf("%s\n", line);
    ft_free(&line);
    return (0);
}