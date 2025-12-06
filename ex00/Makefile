# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/05 12:33:33 by meghribe          #+#    #+#              #
#    Updated: 2025/12/07 00:13:54 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
RM := rm -f
NAME := polymorphism
SRCS := Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OBJS := $(SRCS:.cpp=.cpp.o)
INCS := Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
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
