# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 01:58:16 by ayarmaya          #+#    #+#              #
#    Updated: 2023/11/18 00:21:06 by ayarmaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC		=	ft_bzero
			ft_isalnum
			ft_isalpha
			ft_isascii
			ft_isdigit
			ft_isprint
			ft_memcpy
			ft_memmove
			ft_strlen
			ft_memset
			ft_strlcpy
			ft_strlcat
			ft_toupper
			ft_tolower
			ft_strchr
			ft_strrchr
			ft_strncmp
			ft_memchr
			ft_memcmp
			ft_strnstr
			ft_atoi
			ft_calloc
			ft_strdup
			ft_substr
			ft_strjoin
			ft_strtrim
			ft_split
			ft_itoa
			ft_strmapi
			ft_striteri
			ft_putchar_fd
			ft_putstr_fd
			ft_putendl_fd
			ft_putnbr_fd

SRC_BONUS	=	ft_lstnew
			ft_lstadd_front
			ft_lstsize
			ft_lstlast
			ft_lstadd_back
			ft_lstdelone
			ft_lstclear
			ft_lstiter
			ft_lstmap

SRCS		= 	$(addsuffix .c, ${SRC})

B_SRCS		= 	$(addsuffix _bonus.c, ${SRC_BONUS})

OBJS		=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(B_SRCS:.c=.o)

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM		= 	rm -f

AR		= 	ar crs

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS) $(OBJS_BONUS)
			$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re bonus
