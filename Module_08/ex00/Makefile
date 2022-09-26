# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:04:25 by pleoma            #+#    #+#              #
#    Updated: 2022/08/03 09:36:24 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	array

SRC		=	main.cpp\
			
INCD	= 	easyfind.hpp\
			
OBJDIR	=	obj_dep

OBJ_PATH =	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
#DEP_PATH = 	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.d))

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror
O_FLAG	=	-std=c++98 -O3 #-MD

$(OBJDIR)/%.o 	: 	%.cpp	$(INCD)
		@mkdir -p $(OBJDIR)
		$(CC) $(FLAGS) $(O_FLAG) -o $@ -c $<

all		: $(NAME)

$(NAME) : $(OBJ_PATH) Makefile
		$(CC) $(FLAGS) $(O_FLAG) -o $(NAME) $(OBJ_PATH)

clean	:
		@rm -rf $(OBJDIR)
		@echo "Removing obj"

fclean	:	clean
		@rm -f $(NAME)
		@echo "Removing all"

re		:  fclean all

test	:	$(NAME)
		leaks --atExit -- ./$(NAME)

.PHONY	: all clean fclean re

#-include $(DEP_PATH)
