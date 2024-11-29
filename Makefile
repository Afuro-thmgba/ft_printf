# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 11:57:41 by thmgba            #+#    #+#              #
#    Updated: 2024/11/29 06:56:59 by thmgba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_print_arg.c ft_printf.c ft_putchar.c ft_strcpy.c ft_putnbr.c ft_putunbr.c ft_hex_digitsup.c ft_ntohexa.c ft_hex_digitslow.c ft_printmemory.c
	   
OBJS	= $(SRCS:.c=.o)

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

NAME 	= libftprintf.a

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o:	 %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re: fclean all

.PHONY: re fclean all clean