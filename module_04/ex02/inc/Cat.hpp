/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:26:15 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 17:18:28 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain_cat;
	public:
		Cat();									//Constructor
		Cat(const Cat& original);				//Copy constructor
		~Cat();									//Destructor

		Cat&	operator=(const Cat& rhs); 		//Assignation operator

		void	makeSound() const;
		void	addIdeaToBrain(std::string idea);
		void	getIdeaOfBrain() const;
};

#endif



