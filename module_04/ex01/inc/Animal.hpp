/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:25:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 14:38:28 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"
#define BOLDBLUE "\033[216;1m"

class Animal
{
	private:
		/* data */

	protected:
		std::string	type;

	public:
		Animal();								//Constructor
		Animal(const Animal& original);			//Copy constructor
		virtual ~Animal();						//Destructor

		Animal&	operator=(const Animal& rhs);	//Assignation operator

		virtual void	makeSound() const;
		std::string		getType() const;
};

std::ostream& operator<< (std::ostream &out, const Animal &object);

#endif
