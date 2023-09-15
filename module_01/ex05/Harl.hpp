/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:44 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 17:33:07 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
#include <iostream>

class	Harl {
	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:

		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif