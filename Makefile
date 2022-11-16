# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:20:21 by almatos           #+#    #+#              #
#    Updated: 2022/11/16 18:56:55 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS	= -Wall -Wextra -Werror
CC = @gcc
RM = @rm -f
AR = @ar -rcs
MESSAGE = @echo "Congratulations ✔︎"


SOURCES	= ft_printf.c ft_strchr.c ft_utility.c
OBJECTS	= $(SOURCES:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(AR) $(NAME) $(BONUS)
			@echo ""
			$(MESSAGE)
			@echo ""

clean:
			$(RM) $(OBJECTS)
			@echo ""
			$(MESSAGE)
			@echo ""

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re