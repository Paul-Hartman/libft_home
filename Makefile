CC = cc

CFLAGS = -Wall -Wextra -Werror


SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c


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