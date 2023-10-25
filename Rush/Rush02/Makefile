# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 21:45:31 by jlakshma          #+#    #+#              #
#    Updated: 2023/09/24 17:46:56 by jlakshma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC_DIR = ./srcs/
OBJ_DIR = ./obj/
RM = /bin/rm -f

FUNCTS = main string_operations dictionary_operations number_operations number_processing number_printing
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRC_DIR)%.c, $(FUNCTS))
OBJECTS = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(CFILES))

.PHONY: all $(NAME) clean fclean re

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@gcc $(OPTIONS) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


