/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:54:51 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/15 12:59:33 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_H
# define POLYMORPHISM_H

# define RED	"\033[31m"
# define CYAN	"\033[36m"
# define YELLOW "\033[33m"
# define GREEN	"\033[32m"
# define RES 	"\033[0m"

void	writeText(std::string color, std::string text);
void	testAnimalConstructors();
void	testCatConstructors();
void	testDogConstructors();
void	firstMainFromSubject();
void	wrongAnimalImplementation();
#endif
