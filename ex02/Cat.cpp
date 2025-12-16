/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:20 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/16 21:12:22 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::string	msg;
	
	this->type = "Cat";
	this->brain = new Brain();
	msg = "'" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "'" << this->type << "' destroyed (Destructor called)" << std::endl;
}

Cat::Cat(const Cat &rhs): Animal(rhs)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain(*rhs.brain);
	*this = rhs;
}

Cat::Cat(const Brain &rhs)
{
	std::string	msg;

	this->type = "Cat";
	this->brain = new Brain(rhs);
	msg = "'" + this->type + "' created Parameterized Constructor Called";
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat meows: meow" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->brain);
}
