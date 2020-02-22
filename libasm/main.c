#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FT_STRCPY_BUF_SIZE (1 << 12)
#include <fcntl.h>
int ft_strlen(char * s);
int ft_strcmp(char *s1, char *s2);
char    *ft_strcpy(char *dst, const char *src);
size_t ft_write(int fd, char *buff, int nbyte);
size_t ft_read(int fd, char *buff, int nbyte);
char *ft_strdup(const char *src);
int     main()
{
    char s[250] = {0};
    // int fd = open("./main.c", O_RDONLY);
    // int out = open("./out.txt", O_CREAT | O_RDWR , 777);
    // // ft_strcpy(str, "elb");
    // printf("write your name :");
    // ft_read(0, s, 5);
    // ft_write(out, s, 5);
    printf("%s", ft_strcpy(s, "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet."));
    // printf("\n%s\n", s);
    // printf("%s", ft_strdup(s));
    // printf("%s", ft_strcpy("elb", "elb"));
    // printf("%d\n", ft_strlen("helloos ha;kjshdlkajsdh jkalsjdhlkajshd jhsaldasjdh jhasjdhajsdash jhasjdhajksdhkjh jahsdkljashdlkjash jkhasdkjhasldkjh kjhalksjdhalkjsdhj kjahsdjkahsld jh jasdjhaslkdjh   kljahsdjkahsdlkjh jaldjkahs jkm jahdjaskjdh "));
    return (0);
}