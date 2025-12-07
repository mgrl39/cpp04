/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:05 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/07 02:37:55 by meghribe         ###   ########.fr       */
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

int	main(void)
{
	const unsigned int	animal_quantity = 6;

	Animal *animal[animal_quantity];

	for (unsigned int i = 0 ; i < animal_quantity / 2 ; i++)
		animal[i] = new Cat();
	for (unsigned int i = animal_quantity / 2 ; i < animal_quantity ; i++)
		animal[i] = new Dog();
	for (unsigned int i = 0 ; i < animal_quantity ; i++)
		delete animal[i];
	// testConstructors();
	// mandatoryMain();
	// mandatoryWrong();
}
