/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:56:09 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 18:33:21 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"
#define BOLDBLUE "\033[216;1m"

class	Brain
{
	private:
		std::string	_ideas[100];
		
		
	public:
		Brain();
		Brain(const Brain&	original);
		~Brain();

		Brain&	operator=(const Brain& rhs);
		void	setIdea(std::string);
		void	getIdeas()	const;
		
};

#endif