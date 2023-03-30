# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 12:43:01 by akarakay          #+#    #+#              #
#    Updated: 2022/12/25 12:43:23 by akarakay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAG =  -Wall -Werror -Wextra -c

RM = rm -f

AR = ar rc

MAINSRC = \
	./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c \
	./ft_isascii.c ./ft_isprint.c ./ft_strlen.c \
	./ft_memset.c ./ft_bzero.c ./ft_memcpy.c \
	./ft_memmove.c ./ft_strlcpy.c ./ft_strlcat.c \
	./ft_toupper.c ./ft_tolower.c ./ft_strchr.c \
	./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c \
	./ft_memcmp.c ./ft_atoi.c  ./ft_strmapi.c \
	./ft_calloc.c ./ft_strdup.c ./ft_substr.c \
	./ft_strjoin.c ./ft_putstr_fd.c ft_striteri.c \
	./ft_strnstr.c ./ft_putchar_fd.c ./ft_putendl_fd.c \
	./ft_putnbr_fd.c ./ft_split.c ./ft_strtrim.c ./ft_itoa.c \


MAINOBJ = $(subst .c,.o,$(MAINSRC))

all : $(NAME)

$(NAME) :  $(MAINOBJ)
	$(CC) $(CFLAG) $(MAINSRC)
	$(AR) $(NAME) $(MAINOBJ)

clean : 
	$(RM) $(MAINOBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

