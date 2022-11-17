NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_printf.c 
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
		@ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all