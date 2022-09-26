# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 12:57:32 by pleoma            #+#    #+#              #
#    Updated: 2022/07/16 17:26:56 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	lostFile

SRC		=	Account.cpp\
			tests.cpp
INC		=	Account.hpp
OBJ		=	$(SRC:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG	=	-std=c++98

all		: $(NAME)

$(NAME) : $(OBJ) $(INC) Makefile
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)
		./lostFile

.PHONY : all clean fclean re
