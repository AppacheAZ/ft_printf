# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 10:41:20 by marcoalv          #+#    #+#              #
#    Updated: 2023/09/19 12:36:12 by marcoalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
INCLUDE = printf.h

LIB = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
DIR = ./

FILES = ft_putnbr ft_printf

SOURCES = $(addprefix $(DIR), $(addsuffix .c, $(FILES)))
OBJECTS = $(addprefix $(DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECTS)

clean:
	rm -f $(NAME) *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re