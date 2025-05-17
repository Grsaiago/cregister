LIB_SUFFIX = cregister
LIB_NAME = lib$(LIB_SUFFIX).a

SRC_DIR = src
OBJ_DIR = obj

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

CC = gcc

CFLAGS = -g -masm=intel -Wall -Wextra -Werror

.PHONY: all
all: help

.PHONY: help
help: ## Prints help for targets with comments
	@echo "Available Rules:"
	@cat $(MAKEFILE_LIST) | grep -E '^[a-zA-Z_-]+:.*?## .*$$' | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(LIB_NAME): $(OBJ_DIR) $(OBJS)
	ar -rcs $(LIB_NAME) $(OBJS)

.PHONY: lib
lib: $(LIB_NAME) ## Creates the archive file (the .a)

.PHONY: test
test: $(LIB_NAME) ## Create the test executable
	$(CC) $(CFLAGS) main.c $(LIB_NAME) -o test

.PHONY: clean
clean: ## Deletes the transitive dependencies (the .o files and any test binaries)
	@rm -f test
	@rm -rf $(OBJ_DIR)

.PHONY: fclean
fclean: clean ## Deletes the transitive dependencies and the archive file (.o and .a)
	@rm -f $(LIB_NAME)
	@rm -f test
