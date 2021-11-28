# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 20:47:02 by rmerzak           #+#    #+#              #
#    Updated: 2021/11/27 19:11:28 by rmerzak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = ft_printf.h 

SOURCES = ft_putchar.c ft_putnbhex.c ft_putnbhupper.c ft_putnbrbase10.c\
	  ft_putnbrunsigned10.c ft_putstr.c ft_printpointer.c ft_printpourcentage.c ft_printf.c\

OBJET = $(SOURCES:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJET)
	ar -rcs $(NAME) $(OBJET) 

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJET)

fclean: clean
	rm -f $(NAME)

re: fclean all

