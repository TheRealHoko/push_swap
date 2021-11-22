NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

DBRULE =

INC =	-I./inc \
		-I./lib/libft/inc/

LIB = -L./lib/libft -lft

SRC =	main.c \
		parser.c \
		stack.c \
		error_handling.c \
		instructions/sa.c

TMP = tmp

OBJ = $(addprefix $(TMP)/,$(SRC:.c=.o))

$(NAME) : $(OBJ)
	make -C ./lib/libft $(DBRULE)
	@echo Compiling : $<
	@$(CC) $(CFLAGS) $(INC) -o $(NAME) $(OBJ) $(LIB)

all : DBRULE += all
all : $(NAME)

$(TMP)/%.o : src/%.c
	mkdir -p $(TMP)
	mkdir -p $(TMP)/instructions
	@echo Compiling : $<
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

norm :
	norminette .

debug : CFLAGS += -g -fsanitize=address
debug : DBRULE += debug
debug : re
debug :
	./push_swap 1

clean :
	rm -rf $(TMP)
	make -C ./lib/libft clean

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY : all norm debug clean fclean re
