NAME = ft_printf_h.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = ft_printf_h.h 

SOURCES = ft_putchar.c ft_putnbhex.c ft_putnbhX.c ft_putnbrbase10.c\
	  ft_putnbrunsigned10.c ft_putstr.c ft_printpointer.c ft_printpourcentage.c\

OBJET = $(SOURCES:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJET)
	ar -rcs $(NAME) $(OBJET) $(INCLUDE)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJET)

fclean:
	rm -f $(NAME)

re: fclean all
