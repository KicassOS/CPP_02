# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 22:36:52 by pszleper          #+#    #+#              #
#    Updated: 2023/05/22 22:41:00 by pszleper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILATION = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Fixed.hpp

NAME = a.out

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(COMPILATION) $(OBJ) -o $(NAME)


%.o: %.cpp $(HEADER)
	$(COMPILATION) $< -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
