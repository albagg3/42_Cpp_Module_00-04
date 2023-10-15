/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:25:48 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 18:37:03 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal
{
	private:
		Brain *_brain_dog;
		
	public:
		Dog();									//Constructor
		Dog(const Dog& original);				//Copy constructor
		~Dog();									//Destructor

		Dog&	operator=(const Dog& rhs); 		//Assignation operator
		
		void	makeSound() const;
		void	addIdeaToBrain(std::string idea);
		void	getIdeaOfBrain() const;
};

#endif