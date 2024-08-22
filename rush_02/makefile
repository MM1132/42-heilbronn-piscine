NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include
SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.c \
	$(SRC_DIR)/arguments.c \
	$(SRC_DIR)/read_dictionary.c \
	$(SRC_DIR)/utils.c

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
