# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 18:10:16 by mcarry            #+#    #+#              #
#    Updated: 2021/08/31 14:30:03 by mcarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  newClass

SRC = main.cpp  Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow


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
