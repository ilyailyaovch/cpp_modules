# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 10:14:28 by pleoma            #+#    #+#              #
#    Updated: 2022/07/16 01:02:04 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phoneBook

SRC		=	main.cpp\
			Contact.cpp\
			PhoneBook.cpp
INCD	= 	PhoneBook.hpp\
			Contact.hpp
OBJ		= 	$(SRC:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG	=	-std=c++98

all		: $(NAME)

$(NAME) : $(OBJ) $(INCD) Makefile
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)
		./phoneBook

.PHONY : all clean fclean re