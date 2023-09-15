/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:10:08 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 18:14:28 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){

	Harl	robot;
	
	robot.complain("DEBUG");
	std::cout << std::endl;
	robot.complain("INFO");
	std::cout << std::endl;
	robot.complain("WARNING");
	std::cout << std::endl;
	robot.complain("ERROR");
	std::cout << std::endl;

}

