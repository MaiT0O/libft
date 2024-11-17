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
		ft_putstr_fd.c  ft_substr.c  ft_strjoin.c  ft_strtrim.c  ft_itoa.c \
		ft_strmapi.c  ft_striteri.c  ft_split.c

BONUS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
			ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

NAME    = libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

OBJS    =  ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus : ${OBJS} ${BONUS_OBJS} 
	${AR} ${NAME} ${OBJS} ${BONUS_OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS} ${BONUS_OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean ${NAME}