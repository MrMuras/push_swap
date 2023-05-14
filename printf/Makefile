CC = gcc
CFLAGS = -Wextra -Wall -Werror -I$(LIBFT_PATH)

NAME = libprintf.a
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	ar rc $(NAME) $(OBJS) $(LIBFT)

all: $(NAME)

$(LIBFT):
	@make bonus -sC $(LIBFT_PATH) all

clean:
	rm -f $(OBJS)
	make clean -sC libft

fclean: clean
	rm -f $(NAME)
	make fclean -sC libft

re: fclean all

.PHONY: all clean fclean re