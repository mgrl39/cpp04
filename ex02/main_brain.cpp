/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_brain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:08:53 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/16 21:56:00 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polymorphism.h"
#include "brain.h"

void	testBrainConstructors()
{
	writeText("", "Default Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Brain *brain = new Brain();
		brain->setIdea(0, "first idea");
		writeText("yellow", brain->getIdea(0));
		delete brain;
	}
	writeText("", "Copy Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Brain *first = new Brain();
		first->setIdea(0, "another idea");
		writeText("yellow", first->getIdea(0));
		Brain *second = new Brain(*first);
		delete first;
		writeText("yellow", second->getIdea(0));
		delete second;
	}
	writeText("", "Copy assignment operator ~~~~~~~~~~~~~~~~~~~~");
	{
		Brain *first = new Brain();
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

/*
 * This is not a test of setIdea so it will not be super checked
	// originalBrain->setIdea(0, "Modified idea 0");
	// originalBrain->setIdea(99, "Modified idea 99");
 */
void	testDeepCopyBrain()
{
	Brain *originalBrain = new Brain();
	originalBrain->setIdea(0, "Modified idea 0");
	originalBrain->setIdea(99, "Modified idea 99");
	Cat *cat = new Cat(*originalBrain);
	delete originalBrain;
	writeText("yellow", cat->getBrain()->getIdea(0));
	writeText("yellow", cat->getBrain()->getIdea(99));
	Cat *copiedCat = new Cat(*cat);
	delete cat;
	writeText("yellow", copiedCat->getBrain()->getIdea(0));
	writeText("yellow", copiedCat->getBrain()->getIdea(99));
	Cat *anotherCopiedCat = new Cat();
	*anotherCopiedCat = *copiedCat;
	delete copiedCat;
	writeText("yellow", anotherCopiedCat->getBrain()->getIdea(0));
	writeText("yellow", anotherCopiedCat->getBrain()->getIdea(99));
	delete anotherCopiedCat;
}

/*
int	main(void)
{
	testAnimalConstructors();
	testCatConstructors();
	testDogConstructors();
	testBrainConstructors();
	testDeepCopyBrain();
	return (0);
}
*/
