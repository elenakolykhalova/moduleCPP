# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 18:10:16 by mcarry            #+#    #+#              #
#    Updated: 2021/08/24 11:55:16 by mcarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

HEADER = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow


all: $(NAME)

%.o : %.cpp
	clang++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	clang++ $(SRC) $(CFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME);

re: fclean all

.PHONY = all clean fclean re
