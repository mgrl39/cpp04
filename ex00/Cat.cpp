/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:20 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 00:18:16 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::string	msg;
	
	this->type = "Cat";
	msg = "'" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

Cat::~Cat()
{
	std::cout << "'" << this->type << "' destroyed (Destructor called)" << std::endl;
}

Cat::Cat(const Cat &rhs): Animal(rhs)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat meows: meow " << std::endl;
}
