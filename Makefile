# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 20:54:18 by tcamargo          #+#    #+#              #
#    Updated: 2021/05/24 23:40:26 by tcamargo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

# Name of the project
NAME=libft.a

# .c files
SRC=$(wildcard *.c)

# Object file
OBJ=$(SRC:.c=.o)

# FLags for compiler
CC_FLAGS=-Wextra\
		 -Wall	\
		 -Werror

#
# Compilation and linking
#

all: $(NAME) 
	@echo "Finished!"

$(NAME): $(SRC)
	@echo "Building binary..."
	@gcc $(CC_FLAGS) -c $(SRC)
	@echo "Grouping binaries..."
	@ar rcs $(NAME) $(OBJ)

clean:
	@echo "Cleaning up..."
	@rm -rf *.o *~

fclean: clean
	@rm -rf $(NAME)

re: fclean all
