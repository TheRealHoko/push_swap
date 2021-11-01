NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INC = -I./inc

SRC =	main.c \
		instructions/sa.c

TMP = tmp

OBJ = $(addprefix $(TMP)/,$(SRC:.c=.o))

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(INC) -o $(NAME) $(OBJ)

all : $(NAME)

$(TMP)/%.o : src/%.c
	mkdir -p $(TMP)
	mkdir -p $(TMP)/instructions
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

norm :
	norminette .

debug : CFLAGS += -g -fsanitize=address
debug : re
debug :
	./push_swap 1

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f push_swap

re : fclean $(NAME)

.PHONY : all norm debug clean fclean re
