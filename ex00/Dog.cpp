/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:05 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/06 23:52:53 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	std::string	msg;

	this->type = "Dog";
	msg = "Animal type '" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

Dog::~Dog()
{
	std::cout << "'" << this->type << "' destroyed (Destructor called)" << std::endl;
}

// TODO: check this one
Dog::Dog(const Dog &rhs): Animal(rhs)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog barks: woof" << std::endl;
}
