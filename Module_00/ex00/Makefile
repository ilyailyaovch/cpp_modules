# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 11:40:19 by pleoma            #+#    #+#              #
#    Updated: 2022/07/17 10:47:17 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp
OBJ		= 	$(SRC:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG 	=	-std=c++98

all		: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)
		./megaphone "shhhhh... I think the students are asleep..."
		./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
		./megaphone

.PHONY : all clean fclean re test