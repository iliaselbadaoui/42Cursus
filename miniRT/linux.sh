gcc *.c -o minirt utils/*.c geometry/*.c libft/*.c -I geometry/geometry.h\
-I utils/utils.h -I libft/*.h -I\
minirt.h -Itypes.h -lmlx -lX11 -lXext -lm
./minirt