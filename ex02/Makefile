# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/05 12:33:33 by meghribe          #+#    #+#              #
#    Updated: 2025/12/16 21:57:13 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
RM := rm -f
NAME := abstract
SRCS := Animal.cpp Cat.cpp Dog.cpp main_polymorphism.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main_brain.cpp main_abstract.cpp
OBJS := $(SRCS:.cpp=.cpp.o)
INCS := Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp polymorphism.h Brain.hpp brain.h
DEBUG := -g -pedantic #-fsanitize=address
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
