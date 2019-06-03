NAME =	libft.a

SRC =	ft_putchar.c \
	   	ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_isdigit.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memchr.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \


all:

		gcc -c $(SRC) -Wall -Werror -Wextra -I .
		ar -rc $(NAME) *.o
		ranlib libft.a

clean:
		rm *.o

fclean: clean
		rm libft.a

re:		fclean all

dood:	all
		gcc	libft.a main.c
		./a.out
		rm a.out

norm:
		norminette $(SRC)

test:	norm
		gcc main.c libft.a  -Wall -Werror -Wextra -o test
		./test
		rm test
