# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:20:21 by almatos           #+#    #+#              #
#    Updated: 2022/11/17 18:32:14 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS	= -Wall -Wextra -Werror
CC = @gcc
RM = @rm -f
AR = @ar -rcs
LIBFT = ~/ft_printf/ft_printf/libft
LIBFT_MAKE = @make -C $(LIBFT)
LIBFT_INCLUDE = @cp -L $(LIBFT)/libft.a libftprintf.a

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
			$(LIBFT_MAKE)
			$(LIBFT_INCLUDE)
			$(AR) $(NAME) $(OBJECTS)


clean:
			$(RM) $(OBJECTS)
			make fclean -C $(LIBFT)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

run:		all
			$(CC) $(MAIN_NAME) $(NAME) $(BIN) 
			make fclean -C $(LIBFT)
			clear
			$(MESSAGE)
			@echo " "
			$(MAIN)
			$(RM_MAIN) $(NAME) $(OBJECTS)
			


.PHONY: all clean fclean re