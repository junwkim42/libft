# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junwkim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/10 16:27:35 by junwkim           #+#    #+#              #
#    Updated: 2019/02/07 16:24:02 by junwkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = ft_atoi.c \
	   ft_memset.c \
	   ft_strlcat.c \
	   ft_bzero.c \
	   ft_putchar.c	\
   	   ft_strlen.c \
	   ft_isalnum.c	\
   	   ft_putchar_fd.c \
   	   ft_strlen_safe.c \
	   ft_isalpha.c	\
   	   ft_putendl.c	\
   	   ft_strlower.c \
	   ft_isascii.c	\
   	   ft_putendl_fd.c \
   	   ft_strmap.c \
	   ft_isdigit.c \
	   ft_putnbr.c \
	   ft_strmapi.c \
	   ft_isprint.c	\
   	   ft_putnbr_fd.c \
	   ft_strncat.c \
	   ft_itoa.c \
	   ft_putstr.c \
	   ft_strncmp.c \
	   ft_lstadd.c \
	   ft_putstr_fd.c \
	   ft_strncpy.c \
	   ft_lstdel.c \
	   ft_strcat.c \
	   ft_strnequ.c \
	   ft_lstdelone.c \
	   ft_strchr.c \
	   ft_strnew.c \
	   ft_lstiter.c	\
   	   ft_strchr_c.c \
	   ft_strnstr.c \
	   ft_lstmap.c \
	   ft_strclr.c \
	   ft_strrchr.c \
	   ft_lstnew.c \
	   ft_strcmp.c \
	   ft_strsplit.c \
	   ft_memalloc.c \
	   ft_strcpy.c \
	   ft_strstr.c \
	   ft_memccpy.c \
	   ft_strdel.c \
	   ft_strsub.c \
	   ft_memchr.c \
   	   ft_strdup.c \
	   ft_strtrim.c \
	   ft_memcmp.c \
	   ft_strequ.c \
	   ft_strupper.c \
	   ft_memcpy.c \
	   ft_striter.c	\
   	   ft_tolower.c \
	   ft_memdel.c \
	   ft_striteri.c \
	   ft_toupper.c \
	   ft_memmove.c	\
   	   ft_strjoin.c	\
   	   ft_wordcount.c \
	   ft_strdup_c.c \

FLAGS = -Wall -Wextra -Werror -Iincludes -c

OUT = ft_*.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
