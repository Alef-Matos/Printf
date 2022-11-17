# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:45:19 by almatos           #+#    #+#              #
#    Updated: 2022/11/17 13:52:11 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS	= -Wall -Wextra -Werror
CC = @cc
RM = @rm -f
AR = @ar -rcs

SOURCES	= ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c \
			ft_strnstr.c ft_strncmp.c ft_memcpy.c ft_memcmp.c ft_memchr.c \
			ft_memmove.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c \
			ft_isprint.c ft_memset.c ft_bzero.c ft_strdup.c ft_calloc.c \
			ft_toupper.c ft_tolower.c ft_atoi.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_striteri.c
OBJECTS	= $(SOURCES:.c=.o)

BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
					ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(AR) $(NAME) $(OBJECTS)

bonus:		$(BONUS_OBJECTS) 
			$(AR) $(NAME) $(BONUS_OBJECTS) 

clean: 
			$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all bonus clean fclean re
