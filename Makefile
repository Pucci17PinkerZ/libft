CC := cc
CFLAGS := -Wall -Wextra -Werror
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
NAME := libft.a
RM := rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#bonus
bonus: $(OBJ)
	ar rcs $(NAME) $^

.PHONY: all clean fclean re bonus