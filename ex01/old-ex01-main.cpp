/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:05 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 22:35:20 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include <iostream>

void	testConstructors(void)
{
	{
		Animal	animal;
		animal.makeSound();
	}

	std::cout << "========================" << std::endl;
	{
		Dog 	dog;
		dog.makeSound();
	}

	std::cout << "========================" << std::endl;
	{
		Dog	first;
		Dog	second(first);
	}

	std::cout << "========================" << std::endl;
	{
		Dog	first;
		Dog	second;

		second = first;
	}

}

// First exercise
void	mandatoryMain()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}

void	mandatoryWrong()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	delete meta;
	delete j;
}

/* Second exercise:
 * A copy of a Dog or a Cat mustn’t be shallow. 
 * Thus, you have to test that your copies are deep copies!
 */
void	secondExercise()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;//should not create a leak
	delete i;
}

void	secondExerciseMyTest()
{
	{
		Brain *brain = new Brain();

		brain->setIdea(0, "This is my first Idea");
		std::cout << brain->getIdea(0) << std::endl;
		std::cout << brain->getIdea(-1) << std::endl;
		std::cout << brain->getIdea(100) << std::endl;
		Brain second(*brain);
		delete brain;
		(void)second;
		//std::cout << second->getIdea(0) << std::endl;
	}
}


#include <typeinfo>
int	main(void)
{
	/*
	const unsigned int	animal_quantity = 6;

	Animal *animal[animal_quantity];

	(void)animal_quantity;
	(void)animal;
	*/
	//secondExercise();
	secondExerciseMyTest();
	/*
	for (unsigned int i = 0 ; i < animal_quantity / 2 ; i++)
		animal[i] = new Cat();
	for (unsigned int i = animal_quantity / 2 ; i < animal_quantity ; i++)
		animal[i] = new Dog();
	std::cout << (*animal[0]).getType();
	//std::cout << (animal[0])->brain;
	std::cout << std::endl;
	for (unsigned int i = 0 ; i < animal_quantity ; i++)
		delete animal[i];

		*/
	// testConstructors();
	// mandatoryMain();
	// mandatoryWrong();
}
