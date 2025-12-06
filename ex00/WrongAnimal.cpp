/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:36:00 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 00:34:53 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::string	msg;

	msg = "WrongAnimal type '" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::string	msg;

	msg = "WrongAnimal type '" + this->type + "' destroyed (Destructor Called)";
	std::cout << msg << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs): type(rhs.type)
{
	std::cout << "WrongAnimal Copy Consstructor Called" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal '" << this->type << "' makes a sound" << std::endl;
}

const std::string	WrongAnimal::getType() const
{
	return (this->type);
}
