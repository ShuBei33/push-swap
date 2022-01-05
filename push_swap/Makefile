# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 21:14:47 by estoffel          #+#    #+#              #
#    Updated: 2021/12/24 11:31:52 by estoffel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

INCLD	=	-Llibft/ -lft

SRC		=	check_errors.c	\
			get_index.c		\
			lists.c			\
			main.c			\
			parsing.c		\
			print_stack.c	\
			push.c			\
			rev_rotate.c	\
			rotate.c		\
			sort_big.c		\
			sort_three.c	\
			sort_five.c		\
			swap.c			\

OBJ		=	$(addprefix ./sources/,$(SRC:%.c=%.o))

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ) ./libft/libft.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -Llibft -lft

./libft/libft.a:
	make $(@F) -C $(@D)

clean:
	$(RM) $(OBJ)
	make $@ -C ./libft/

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	make $@ -C ./libft/

re: fclean all

.PHONY: all clean fclean re