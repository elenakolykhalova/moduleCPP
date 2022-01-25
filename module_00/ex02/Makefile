# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/08 01:35:05 by mcarry            #+#    #+#              #
#    Updated: 2021/08/08 17:20:40 by mcarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

SRC = Account.cpp tests.cpp

HEADER = Account.hpp

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
