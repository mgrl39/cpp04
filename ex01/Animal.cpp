/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:29 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 01:48:17 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("Animal")
{
	std::string	msg;

	msg = "Animal type '" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

Animal::~Animal()
{
	std::string	msg;

	msg = "Animal type '" + this->type + "' destroyed (Destructor Called)";
	std::cout << msg << std::endl;
}

Animal::Animal(const Animal &rhs): type(rhs.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "The animal '" << this->type << "' makes a sound" << std::endl;
}

const std::string	Animal::getType() const
{
	return (this->type);
}
