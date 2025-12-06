/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:01 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/06 22:45:25 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		override void makeSound();
};

#endif
