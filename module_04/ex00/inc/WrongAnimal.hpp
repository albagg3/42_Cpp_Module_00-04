/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:14:34 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 16:39:22 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"
#define BOLDBLUE "\033[216;1m"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();										//constructor
		WrongAnimal(WrongAnimal& original); 				//constructor copia
		virtual ~WrongAnimal();								//Destructor

		WrongAnimal&	operator=(const WrongAnimal& rhs);	//Assignation operator

		void			makeSound() const;
		std::string		getType()	const;
};

std::ostream& operator<<(std::ostream &out, const WrongAnimal &object);
#endif