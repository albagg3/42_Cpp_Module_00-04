/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:57:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/29 20:31:02 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		MateriaSource();
		MateriaSource(const MateriaSource&)
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& rhs)
		void	learnMateria(AMateria* m)
		AMateria*	createMateria(const std::string& type)
};

#endif