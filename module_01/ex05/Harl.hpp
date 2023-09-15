/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:44 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 18:05:05 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
#include <iostream>

class	Harl {
	private:

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

	public:

		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif