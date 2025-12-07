/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 01:04:57 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 02:38:34 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
// TODO: DO GETTERS AND SETTERS 

Brain::Brain()
{
	this->count = 0;
	std::cout << "Brain created Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed (Destructor called)" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = rhs;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	//std::cout << "Brain Copy assignment operator called" << std::endl;
	this->count = rhs.count;
	for (int i = 0; i <= this->count; i++)
		this->ideas[i] = rhs.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
	{
		std::cout << "getIdea: Invalid idea index" << std::endl;
		return ("");
	}
	return (this->ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
	{
		this->ideas[i] = idea;
		this->count++;
	}
}
