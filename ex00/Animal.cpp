/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:29 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/05 13:13:29 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::string	msg;

	this->type = "Animal";
	msg = "Animal type '" + this->type + "' created Default Constructor Called";
	std::cout << msg << std::endl;
}

Animal::~Animal()
{
	std::string	msg;

	msg = "Animal type '" + this->type + "' destroyed (Destructor Called)";
	std::cout << msg << std::endl;
}
