/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_polymorphism.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:05 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/16 21:42:48 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polymorphism.h"
#include <iostream>

void	writeText(std::string color, std::string text)
{
	std::string	var;

	if (color == "red")
		var = RED;
	else if (color == "cyan")
		var = CYAN;
	else if (color == "yellow")
		var = YELLOW;
	else
		var = GREEN;
	std::cout << var << text << RES << std::endl;
}

void	testAnimalConstructors()
{
	writeText("", "Default Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Animal animal;
		writeText("yellow", animal.getType());
	}
	writeText("", "Copy Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Animal first;
		Animal second(first);
		writeText("yellow", first.getType());
		writeText("yellow", second.getType());
	}
	writeText("", "Copy assignment operator ~~~~~~~~~~~~~~~~~~~~");
	{
		Animal first;
		Animal second;

		second = first;
		writeText("yellow", first.getType());
		writeText("yellow", second.getType());
	}
}

void	testCatConstructors()
{
	writeText("", "Default Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Cat cat;
		writeText("yellow", cat.getType());
	}
	writeText("", "Copy Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Cat first;
		Cat second(first);
		writeText("yellow", first.getType());
		writeText("yellow", second.getType());
	}
	writeText("", "Copy assignment operator ~~~~~~~~~~~~~~~~~~~~");
	{
		Cat first;
		Cat second;

		second = first;
		writeText("yellow", first.getType());
		writeText("yellow", second.getType());
	}
}

void	testDogConstructors()
{
	writeText("", "Default Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Dog dog;
		writeText("yellow", dog.getType());
	}
	writeText("", "Copy Constructor ~~~~~~~~~~~~~~~~~~~~");
	{
		Dog first;
		Dog second(first);
		writeText("yellow", first.getType());
		writeText("yellow", second.getType());
	}
	writeText("", "Copy assignment operator ~~~~~~~~~~~~~~~~~~~~");
	{
		Dog first;
		Dog second;

		second = first;
		writeText("yellow", first.getType());
		writeText("yellow", second.getType());
	}
}

/*
 * The only thing changed here from the original main of 
 * the subject is the colors
 * and the deletes
 */
void	firstMainFromSubject()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << YELLOW << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << RES << std::endl;
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}

void	wrongAnimalImplementation()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();
	//std::cout << j->getType() << " " << std::endl;
	writeText("yellow", j->getType());
	std::cout << YELLOW << std::endl;
	meta->makeSound();
	j->makeSound();
	std::cout << RES << std::endl;
	delete meta;
	delete j;
}

/*
int	main(void)
{
	writeText("cyan", "========== testing canonical ortodox form ==========");
	testAnimalConstructors();
	testCatConstructors();
	testDogConstructors();
	writeText("cyan", "=========== main from subject =========");
	firstMainFromSubject();
	writeText("cyan", "=========== wronganimal wrongcat main implementation ===========");
	wrongAnimalImplementation();
	return (0);
}
*/
