CC = gcc
CFLAGS = -Wextra -Wall -Werror

NAME = push_swap
PRINTF = ./printf/libprintf.a

SRCS = main.c parsing.c utils.c rotate.c reverserotate.c swap.c push.c sorting_utils.c sorting.c list.c list2.c
OBJS = $(SRCS:.c=.o)

INC_FLAGS = -I./printf
LIB_FLAGS = -L./printf -lprintf -L./printf/libft -lft

%.o: %.c
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIB_FLAGS) -o $(NAME)

all: $(NAME)

$(PRINTF): 
	@make -C printf

clean:
	rm -f $(OBJS)
	make clean -sC printf

fclean: clean
	rm -f $(NAME)
	@make fclean -C printf

re: fclean all

.PHONY: all clean fclean re