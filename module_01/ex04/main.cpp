/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:52:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/14 18:42:32 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string filename;
	std::string	s1;
	std::string s2;


	if(argc != 4)
	 	std::cout << "The number of arguments is wrong" << std::endl;
	else
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::ifstream file(filename);
		if (!file.is_open())
		{
			std::cout << "Error openning the file" << std::endl;
			exit(EXIT_FAILURE);
		}
		while(getline())
		//hasta que no se acabe el file ir leyendo lineas y copiandolas en otro archivo si encontramos el s1 lo sustituimos por s2
	
		
	}

}