# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:04:25 by pleoma            #+#    #+#              #
#    Updated: 2022/07/28 13:44:18 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	clap4

SRC		=	main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp
INCD	= 	ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\
			DiamondTrap.cpp
OBJ		= 	$(SRC:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG	=	-std=c++98

all		: $(NAME)

$(NAME) : $(OBJ) Makefile
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)
		./clap4

.PHONY : all clean fclean re