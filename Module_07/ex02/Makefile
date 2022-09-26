# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:04:25 by pleoma            #+#    #+#              #
#    Updated: 2022/08/02 21:55:48 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	array

SRC		=	main.cpp\
			
INCD	= 	Array.hpp\
			
OBJ		= 	$(SRC:.cpp=.o)
DEP		=	$(SRC:.cpp=.d)
-include $(DEP)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG	=	-std=c++98 -MD -O3

%.o 	: 	%.cpp
		$(CC) $(FLAGS) $(O_FLAG) -o $@ -c $<

all		: $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(FLAGS) $(O_FLAG) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ) $(DEP)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)
		leaks --atExit -- ./$(NAME)

.PHONY	: all clean fclean re
