# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 11:01:21 by hbarnard          #+#    #+#              #
#    Updated: 2019/06/03 13:33:44 by hbarnard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

CFLAGS	= -Wall -Werror -Wextra -I. -c

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
		ft_tolower.c \
		ft_memalloc.c \
		ft_iswhitespace.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_word_len.c \
		ft_word_count.c \
		ft_strsplit.c \
		ft_nbr_len.c \
		ft_power_of.c \
		ft_itoa.c \
		ft_putendl.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_strndup.c \
		poschr.c \

OBJ	= $(SRC:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJ)	
	ar rcs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
		norminette $(SRC)

