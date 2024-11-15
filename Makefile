CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
SRCS =
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean all clean