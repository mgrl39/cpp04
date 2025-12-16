/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_abstract.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:50:20 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/16 22:55:22 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polymorphism.h"
#include "brain.h"
#include "abstract.h"

// The message printed is similar to the error you get if you quit the '//' in Animal a;
void	testAbstractClassInstance()
{
	writeText("", "variable type 'Animal' is an abstract class");
	// Animal a;
}

int	main(void)
{
	testCatConstructors();
	testDogConstructors();
	// testAbstractClassInstance();
	return (0);
}
