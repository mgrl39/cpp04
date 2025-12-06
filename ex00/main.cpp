/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:05 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/06 23:57:32 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
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

int	main(void)
{
	// testConstructors();
	mandatoryMain();
}
