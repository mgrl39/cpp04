/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:24 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/06 22:29:42 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		override void makeSound();
};

#endif
