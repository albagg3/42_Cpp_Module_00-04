/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:29:02 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 18:28:27 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{

    private:
    
    public:
        Cure();
        Cure(const Cure& original);
        ~Cure();

        Cure&    operator=(const Cure& rhs);
		Cure*	clone() const;
		void        use(ICharacter& target);
};

#endif