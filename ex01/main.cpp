/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:08:53 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/15 13:09:06 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polymorphism.h"
#include <iostream>

void	testBrainConstructors()
{
	writeText("", "Default Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Brain *brain = new Brain();
		if (!brain)
			return writeText("red","!!!!!! new failed");
		brain->setIdea(0, "first idea");
		writeText("yellow", brain->getIdea(0));
		delete brain;
	}
	writeText("", "Copy Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Brain *first = new Brain();
		if (!first)
			return writeText("red","!!!!!! new failed");
		first->setIdea(0, "another idea");
		writeText("yellow", first->getIdea(0));
		Brain *second = new Brain(*first);
		if (!second)
			return writeText("red","!!!!!! new failed");
		delete first;
		writeText("yellow", second->getIdea(0));
		delete second;
	}
	writeText("", "Copy assignment operator ~~~~~~~~~~~~~~~~~~~~");
	{
		Brain *first = new Brain();
		if (!first)
			return writeText("red","!!!!!! new failed");
		first->setIdea(99, "last idea");
		Brain *second = new Brain();

		writeText("yellow", first->getIdea(99));
		// std::cout << first << std::endl;
		// std::cout << second << std::endl;
		*second = *first;
		// std::cout << first << std::endl;
		// std::cout << second << std::endl;
		writeText("yellow", second->getIdea(99));
		delete first;
		delete second;
	}
}

void	testDeepCopyBrain()
{
	Brain *brain = new Brain();
	if (!brain)
		return writeText("red","!!!!!! new failed");
	brain->setIdea(99, "last idea");
	// TODO: CONTINUE THIS
	Cat *cat = new Cat(*brain);
	if (!cat)
		return writeText("red","!!!!!! new failed");
	delete cat;
}

int	main(void)
{
	/*
	testAnimalConstructors();
	testCatConstructors();
	testDogConstructors();
	*/
	testBrainConstructors();
	testDeepCopyBrain();
	return (0);
}
