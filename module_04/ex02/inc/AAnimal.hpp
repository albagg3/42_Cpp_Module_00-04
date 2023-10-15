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

#ifndef AANIMAL_H
# define AANIMAL_H
#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"
#define BOLDBLUE "\033[216;1m"

class AAnimal
{
	private:
		/* data */

	protected:
		std::string	type;

	public:
		AAnimal();								//Constructor
		AAnimal(const AAnimal& original);			//Copy constructor
		virtual ~AAnimal();						//Destructor

		AAnimal&	operator=(const AAnimal& rhs);	//Assignation operator

		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

std::ostream& operator<< (std::ostream &out, const AAnimal &object);

#endif
