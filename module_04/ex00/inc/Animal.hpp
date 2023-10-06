/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:25:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/06 18:48:11 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>

class Animal
{
	private:
		/* data */

	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal& original);
		~Animal();
};

#endif
