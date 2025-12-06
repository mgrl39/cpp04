/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:44 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 00:35:44 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	std::string	msg;

	this->type = "WrongCat";
	msg = "'" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "'" << this->type << "' destroyed (Destructor called)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs): WrongAnimal(rhs)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat meows: meow" << std::endl;
}
