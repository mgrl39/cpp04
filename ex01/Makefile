# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/05 12:33:33 by meghribe          #+#    #+#              #
#    Updated: 2025/12/15 11:06:35 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
RM := rm -f
NAME := brain
SRCS := Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS := $(SRCS:.cpp=.cpp.o)
INCS := Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
DEBUG := -g -fsanitize=address -pedantic
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 $(DEBUG)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.cpp.o: %.cpp Makefile $(INCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
