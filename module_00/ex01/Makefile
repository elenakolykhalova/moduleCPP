# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 18:10:40 by mcarry            #+#    #+#              #
#    Updated: 2021/08/07 22:48:41 by mcarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp contact.cpp main.cpp

HEADER = phonebook.hpp contact.hpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -g -Wall -Wextra -Werror


all: $(NAME)

%.o : %.cpp
	clang++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	clang++ $(SRC) $(CFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME);

re: fclean all

.PHONY = all clean fclean re
