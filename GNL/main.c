#include "get_next_line.h"

int main()
{
    int fd = open("test.txt", O_RDONLY);
    char *line;
    get_next_line(fd, &line);
    printf("%s", line);
}