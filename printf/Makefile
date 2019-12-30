NAME = libftprintf.a
CC = gcc -Wall -Werror -Wextra -c

SRCS =	src/ft_abs.c src/ft_finder.c src/ft_mix_help.c src/ft_nb_length.c src/ft_processor.c src/ft_putnbr_u_fd.c src/ft_strchr.c src/ft_type_len.c src/star_help.c \
		src/ft_atoi.c src/ft_inits.c src/ft_mix_help_2.c src/ft_point_process.c src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_strlen.c src/ft_zero_process.c \
		src/ft_char_times.c src/ft_match_conversion.c src/ft_mixed_flags.c src/ft_print_type.c src/ft_putnbr_fd.c src/ft_star_process.c src/ft_to_hex.c src/ft_zeros_spaces.c ft_printf.c

OBJ =	ft_abs.o ft_finder.o ft_mix_help.o ft_nb_length.o ft_processor.o ft_putnbr_u_fd.o ft_strchr.o ft_type_len.o star_help.o\
		ft_atoi.o ft_inits.o ft_mix_help_2.o ft_point_process.o ft_putchar_fd.o ft_putstr_fd.o ft_strlen.o ft_zero_process.o\
		ft_char_times.o ft_match_conversion.o ft_mixed_flags.o ft_print_type.o ft_putnbr_fd.o ft_star_process.o ft_to_hex.o ft_zeros_spaces.o ft_printf.o
INC = ft_printf.h

all:$(NAME)

$(NAME):
	@$(CC) $(SRCS) -I $(INC)
	@ar -rc $(NAME) $(OBJ)
clean:
	@rm -rf $(OBJ)
fclean:clean
	@rm -rf $(NAME)
re:fclean all
test:all clean
.PHONY: all clean fclean re