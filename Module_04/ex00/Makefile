# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:04:25 by pleoma            #+#    #+#              #
#    Updated: 2022/07/28 21:39:04 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	poly

SRC		=	main.cpp\
			Cat.cpp\
			Dog.cpp\
			Animal.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp
			
INCD	= 	Cat.hpp\
			Dog.hpp\
			Animal.hpp\
			WrongAnimal.hpp\
			WrongCat.hpp
			
OBJ		= 	$(SRC:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG	=	-std=c++98

all		: $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(FLAGS) $(O_FLAG) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)

.PHONY : all clean fclean re