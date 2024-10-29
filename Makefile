# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaldelo <abaldelo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 16:21:08 by abaldelo          #+#    #+#              #
#    Updated: 2024/10/29 14:15:38 by abaldelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
RM		= rm -f
CC		= cc
CCFLAGS = -Wall -Werror -Wextra
LIB		= ar r
SRC		= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthexnbr.c ft_putptr.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
		@$(CC) $(CCFLAGS) $(SRC) -c
		@$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re