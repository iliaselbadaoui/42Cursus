COM = gcc
FLAGS = -Wall -Werror -Wextra -c
SRCS = ft*.c
OUTS = *.o
NAME = libft.a
INC = libft.h

all: $(NAME)
	
$(NAME):
	$(COM) $(FLAGS) $(SRCS) -I $(INC)
	ar rc $(NAME) $(OUTS)
	ranlib $(NAME)
clean :
	rm -f *.o
fclean :
	rm -f *.o $(NAME)
re : fclean all clean
main : *.c
	$(COM) -Wall -Werror -Wextra *.c
