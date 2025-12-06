/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:34:35 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/06 21:16:09 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		~Animal();
		Animal(const Animal &rhs);
		Animal &operator=(const Animal &rhs);
		virtual void	makeSound();
};

#endif
