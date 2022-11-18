# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:20:21 by almatos           #+#    #+#              #
#    Updated: 2022/11/18 11:10:40 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS	= -Wall -Wextra -Werror
CC = @gcc
RM = @rm -f
AR = @ar -rcs

SOURCES	= ft_printf.c ft_printf_utility.c
OBJECTS	= $(SOURCES:.c=.o)

MESSAGE = @echo "Congratulations Programa compilado ✔︎"
MAIN_NAME = main.c
MAIN = @./main
RM_MAIN = $(RM) main
RM_A = $(RM) $(NAME)
BIN = -o main

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(AR) $(NAME) $(OBJECTS)


clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

run:		all
			$(CC) $(MAIN_NAME) $(NAME) $(BIN) 
			$(MESSAGE)
			@echo " "
			$(MAIN)
			$(RM_MAIN) $(NAME) $(OBJECTS)
			


.PHONY: all clean fclean re