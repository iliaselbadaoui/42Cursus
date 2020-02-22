nas = nasm -f macho64
gcc = gcc 
assemblies = ft_read.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_strlen.s ft_write.s
obj = ft_read.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_write.o
NAME = libasm.a

all: $(NAME)
$(NAME):
	@nasm -f macho64 ft_read.s
	@nasm -f macho64 ft_write.s
	@nasm -f macho64 ft_strcmp.s
	@nasm -f macho64 ft_strcpy.s
	@nasm -f macho64 ft_strdup.s
	@nasm -f macho64 ft_strlen.s
	@ar rc $(NAME) $(obj)
	@ranlib $(NAME)
clean:
	@rm -rf *.o
fclean: clean
	@rm -rf libasm.a
re : fclean all clean