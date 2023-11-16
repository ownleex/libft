# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 01:58:16 by ayarmaya          #+#    #+#              #
#    Updated: 2023/11/16 16:22:33 by ayarmaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC		=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
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
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

OBJS		=	$(SRC:.c=.o)

SRC_BONUS	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
#			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJS_BONUS	=	$(SRC_BONUS:.c=.o)

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
