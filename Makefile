# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 16:33:38 by ayarmaya          #+#    #+#              #
#    Updated: 2023/11/07 16:13:09 by ayarmaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c	\
		ft_memmove.c \
		ft_strlen.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \

OBJS =		$(SRC:.c=.o)

CC = 		gcc

CFLAGS =	-Wall -Wextra -Werror

RM = 		rm -f

AR = 		ar crs

all:		$(NAME)

$(NAME): 	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
