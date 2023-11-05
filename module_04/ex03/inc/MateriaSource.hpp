/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:57:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/11/05 18:28:53 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materia_source_inventory[4];

	public:
		MateriaSource();										//Constructor
		MateriaSource(const MateriaSource&);					//Constructor copia
		~MateriaSource();										//Destructor

		MateriaSource& operator=(const MateriaSource& rhs);		//operador de asignacion
		void	learnMateria(AMateria* m);
		AMateria*	createMateria(const std::string& type);
};

#endif