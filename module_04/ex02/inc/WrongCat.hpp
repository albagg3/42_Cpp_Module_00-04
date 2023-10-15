/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:14:38 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 16:40:39 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(WrongCat& original);
		~WrongCat();

		WrongCat&	operator=(const WrongCat& rhs);

		void	makeSound() const;
};

#endif