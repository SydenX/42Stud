NAME = libft.a
SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c
OBJ = ${SRCS:.c=.o}
HEADER = includes

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ):
	gcc -Wall -Wextra -Werror -I $(HEADER) ${@:.o=.c} -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, re, fclean, clean
