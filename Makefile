# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:20:21 by almatos           #+#    #+#              #
#    Updated: 2022/11/16 10:20:24 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS	= -Wall -Wextra -Werror
CC = @cc
RM = @rm -f
AR = @ar -rcs

SOURCES	=
OBJECTS	= $(SOURCES:.c=.o)

all:		$(NAME)

$(NAME):

clean:

fclean:

re:

.PHONY: all clean fclean re