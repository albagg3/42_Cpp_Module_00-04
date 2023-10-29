/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:20:14 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 20:31:13 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_H
# define IMATERIA_SOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource(){}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif