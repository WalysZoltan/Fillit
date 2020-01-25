# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzoltan <wzoltan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 17:12:45 by wzoltan           #+#    #+#              #
#    Updated: 2020/01/25 18:11:23 by wzoltan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLAGS = -Wall -Wextra -Werror
INCLUDES =
SRC = ./libft/algorithm.c ./libft/fillit.c ./libft/grid.c ./libft/max_n_check.c
OBJS = algorithm.o fillit.o grid.o max_n_check.o
all: $(NAME)

$(NAME):
	make -C ./libft/
	gcc  -c $(SRC)
	gcc  -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	make -C libft/ clean
fclean: clean
		rm -rf $(NAME)
		make -C ./libft/ fclean

re: fclean all
