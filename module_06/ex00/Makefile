# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 18:10:16 by mcarry            #+#    #+#              #
#    Updated: 2021/09/03 18:24:48 by mcarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRC = main.cpp Castes.cpp

OBJ = $(SRC:.cpp=.o)

-include $(OBJ:.o=.d) #зависимость от хэдера с флагом -MMD

CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD


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

