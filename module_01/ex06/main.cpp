/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:10:08 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 18:47:32 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){

	Harl	robot;
	if(argc == 2)
		robot.complain(argv[1]);
	else{

		std::cout << "Please enter a valid option: " << std::endl;
		std::cout << "DEBUG" << std::endl;
		std::cout << "INFO" << std::endl;
		std::cout << "WARNING" << std::endl;
		std::cout << "ERROR" << std::endl;
	}
	
}

