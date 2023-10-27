# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 14:50:29 by ayarmaya          #+#    #+#              #
#    Updated: 2023/10/26 17:00:26 by ayarmaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC			=	ft_isalnum.c ft_isprint.c ft_isalpha.c \
					ft_isdigit.c ft_memset.c ft_memcpy.c \
					ft_bzero.c  ft_isascii.c ft_strlen.c \
					ft_memmove.c
					
SRCS = $(LIBC) $(ADDITIONAL)

SRCSALL = $(LIBC) $(ADDITIONAL) $(BONUS)

OBJS = $(SRCS:.c=.o)

OBJSALL = $(SRCSALL:.c=.o) 

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(LIB):	$(OBJS)
		ar -rsc $(LIB) $(OBJS)

bonus:	$(OBJSALL)
		ar -rsc $(LIB) $(OBJSALL)

all: 	$(LIB)

clean:	
		rm -f $(OBJSALL)

fclean:	clean;
		rm -f $(LIB)

re:	fclean all

.PHONY: all clean fclean re bonus