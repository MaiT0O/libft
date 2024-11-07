# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 11:18:44 by ebansse           #+#    #+#              #
#    Updated: 2024/11/07 11:18:44 by ebansse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c \
		ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
		ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
		ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
		ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
		ft_putstr_fd.c

NAME    = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS    =  ${SRCS:.c=.o}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean ${NAME}