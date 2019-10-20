COM = gcc
FLAGS = -Wall -Werror -Wextra -c
SRCS = ft_*.c
OUTS = *.o
NAME = libft.a
INC = libft.h

all: $(NAME)
	ar rc $(NAME) $(OUTS)
$(NAME):
	$(COM) $(FLAGS) $(SRCS) -I $(INC)
clean :
	rm -f *.o
fclean :
	rm -f *.o $(NAME)
re : fclean all clean
main : *.c
	$(COM) -Wall -Werror -Wextra *.c
