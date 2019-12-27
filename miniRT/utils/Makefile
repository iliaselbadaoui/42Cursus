CC = gcc -Werror -Wextra -Wall -c
Include = utils.h
NAME = utils.a
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	@$(CC) $(SRC) -I $(Include)
	@ar rc $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ) $(NAME)