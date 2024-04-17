# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 09:36:50 by isilva-t          #+#    #+#              #
#    Updated: 2024/04/16 10:43:15 by isilva-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SOURCES = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_strdup.c #main.c ATENCAO QUE ESTA AQUI COMENTADO, OLHA PARA AQUI!!!!!!!!!!!

OBJECTS = ${SOURCES:.c=.o}
NAME = libft.a
ARCHIVE = ar -rc
MSG1 = @echo "Compiled!"
MSG2 = @echo "Cleaned!"

#DELIVER_____________________________
$(NAME): $(NAME) 
	${CC} -c ${CFLAGS} $(SOURCES) 
	${ARCHIVE} $(NAME) ${OBJECTS}
	${MSG1}

all: ${NAME}

clean:
	@rm -rf ${OBJECTS}
	${MSG2}

fclean: clean
	@rm -rf ${NAME}
	${MSG2}

re: fclean all

.PHONY: all, clean, fclean, re 
