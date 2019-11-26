NAME = libftprintf.a
CC = gcc -Wall -Werror -Wextra -c
SRCS = src/*.c ft_printf.c
OBJ = *.o
INC = ft_printf.h

all:$(NAME)

$(NAME):
	@$(CC) $(SRCS) -I $(INC)
	@ar -rc $(NAME) $(OBJ)
clean:
	@rm -rf *.o
fclean:clean
	@rm -rf *.a
re:fclean all
test:all clean
.PHONY: all clean fclean re