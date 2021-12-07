CC=gcc
LIBFT_DIR=libft/
CFLAGS=-Wall -Wextra -Werror -I $(LIBFT_DIR)
CFILES=ft_printf.c ft_putstr.c
OBJS=ft_printf.o ft_putstr.o
NAME=libftprintf.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -L ./$(LIBFT_DIR) -lft

$(NAME): $(OBJS)
	$(MAKE) -sC $(LIBFT_DIR)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) clean -sC $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -sC $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

test:
	$(CC) $(CFLAGS) main.c -L ./$(LIBFT_DIR) -lft -L ./ -l ftprintf

.PHONY: all clean fclean re 