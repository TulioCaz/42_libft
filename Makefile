# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 20:54:18 by tcamargo          #+#    #+#              #
#    Updated: 2021/06/07 15:20:57 by tcamargo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		libft.a

CC=			gcc

CC_FLAGS=	-Wextra	\
		 	-Wall	\
		 	-Werror

SRC=		ft_atoi.c		\
			ft_itoa.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_islower.c	\
			ft_isupper.c	\
			ft_isprint.c	\
			ft_memccpy.c	\
			ft_memcpy.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c

BONUS=		ft_lstnew.c		\
			ft_lstsize.c	\
			ft_lstmap.c		\
			ft_lstlast.c	\
			ft_lstiter.c	\
			ft_lstdelone.c	\
			ft_lstclear.c	\
			ft_lstadd_back.c\
			ft_lstadd_front.c

OBJ=		$(SRC:.c=.o)

OBJ_BONUS=	$(BONUS:.c=.o)

#
# Compilation and linking
#

all:	$(NAME) 
	@echo "Finished!"

$(NAME):$(OBJ)
	@ar rc $(NAME) $^
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

bonus:	$(OBJ) $(OBJ_BONUS)
	@ar rc $(NAME) $^
	@echo "$(NAME) created with bonus"
	@ranlib $(NAME)
	@echo "$(NAME) indexed with bonus"

%.o:	%.c
	@$(CC) $(CC_FLAGS) -o $@ -c $<

clean:
	@echo "Cleaning Objects..."
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -rf $(NAME)

re:		fclean all

.PHONY:	all, clean, fclean, re, bonus