#include "get_next_line.h"

int main()
{
    int fd = open("just_nl.txt", O_RDONLY);
    char *line;
    while (get_next_line(fd, &line))
    {
        printf("%s\n", line);
        free(line);
    }
}