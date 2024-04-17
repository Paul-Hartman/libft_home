CC = cc

CFLAGS = -Wall -Wextra -Werror


SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c


HEADERS = libft.h


OBJS = $(SRCS:.c=.o)


NAME = libft.a


all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -Iincludes -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all


.PHONY: all fclean clean re