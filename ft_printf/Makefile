# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:20:21 by almatos           #+#    #+#              #
#    Updated: 2022/11/21 13:26:48 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS	= -Wall -Wextra -Werror
CC = @cc
RM = @rm -f
AR = @ar -rcs
MSN = @echo "Congratulations ✔︎"

SOURCES	= ft_printf.c ft_utility.c
OBJECTS	= $(SOURCES:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(AR) $(NAME) $(OBJECTS)
			@echo " "
			$(MSN)
			@echo " "

clean:
			$(RM) $(OBJECTS)
			@echo " "
			$(MSN)
			@echo " "
			
fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re