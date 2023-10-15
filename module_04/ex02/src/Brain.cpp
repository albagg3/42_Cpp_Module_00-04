/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:56:04 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 18:40:56 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Constructor
Brain::Brain()
{
	std::cout << GREY << "Default Brain constructor was called" << RESET << std::endl;
}

//Copy constructor
Brain::Brain(const Brain& original) 
{
	for(int i = 0; i < 100; i++)
	{
		this->_ideas[i] = original._ideas[i];
	}
	std::cout << GREY << "Brain copy constructor was called" << RESET << std::endl;
}

//Destructor
Brain::~Brain()
{
	std::cout << GREY << "Destructor was called" << RESET << std::endl;
}

//Assignation operator
Brain&	Brain::operator=(const Brain& rhs)
{
	if (this == &rhs)
		return *this;
	for(int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void	Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (_ideas[i].empty())
		{
			_ideas[i] = idea;
			break ;
		}
	}
}

void Brain::getIdeas()	const
{
	for (int i = 0; i < 100; i++)
	{
		if (!_ideas[i].empty())
		{
			std::cout << _ideas[i] << std::endl;
		}
	}
}