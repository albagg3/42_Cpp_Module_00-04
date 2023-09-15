/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:52:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 16:55:55 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_and_copy_to_new_file(std::ofstream& file, std::string line, std::string s1, std::string s2);

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	line;

	if(argc != 4)
	 	std::cout << "The number of arguments is wrong" << std::endl;
	else
	{
		std::ifstream file_in_read;
		filename = argv[1];

		file_in_read.open(argv[1]);
		if (!file_in_read.is_open())
		{
			std::cout << "Error openning the file" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::ofstream file_out_write;
		file_out_write.open(argv[1] + ".replace", std::ios::out);
		if(!file_out_write.is_open())
		{
			std::cout << "Error openning the file" << std::endl;
			exit(EXIT_FAILURE);
		}
		while(getline(file_in_read, line))
			replace_and_copy_to_new_file(file_out_write, line, argv[2], argv[3]);
	}

}

void	replace_and_copy_to_new_file(std::ofstream& file, std::string line, std::string s1, std::string s2)
{
	size_t		index = 0;
	std::string	new_line;

	new_line = line;	
	while(new_line.find(s1, 0) != std::string::npos)
	{
		index = new_line.find(s1,0);
		new_line = new_line.substr(0, index);
		new_line.insert(index, s2);
		new_line.append(line, index + s1.length(), line.length() - (index + s1.length()));
	}	
	file << new_line << std::endl;
}