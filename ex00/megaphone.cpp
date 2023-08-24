/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:39:51 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/24 10:39:55 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while ((size_t)j < strlen(argv[i]))
            {   
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            if (i != argc - 1)
                std::cout << argv[i] << " ";
            else
                std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
    }  
}
