# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 18:10:16 by mcarry            #+#    #+#              #
#    Updated: 2021/09/03 13:58:27 by mcarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98


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