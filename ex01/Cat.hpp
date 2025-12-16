/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:35:24 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/16 20:49:01 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Brain &brain);
		~Cat();
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		void makeSound() const;
		Brain*	getBrain() const;
};

#endif
