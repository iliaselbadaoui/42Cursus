#ifndef LIBASM_H
# define LIBASM_H

# include <sys/types.h>

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *str1, const char *str2);
ssize_t		ft_write(int fd, const void *buffer, size_t size);
ssize_t		ft_read(int fd, void *buffer, size_t size);
char		*ft_strdup(const char *s);
#endif
