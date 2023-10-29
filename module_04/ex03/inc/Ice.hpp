/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:29:06 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 19:57:34 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{

    private:
    
    public:
        Ice();
        Ice(const Ice& original);
        ~Ice();

        Ice&    operator=(const Ice& rhs);
		Ice*	clone() const;
		void	use(ICharacter& target)
};

#endif