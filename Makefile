NAME =	libft.a

SRC =	ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_strdup.c

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
