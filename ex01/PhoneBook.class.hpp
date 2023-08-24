/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:41:02 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/24 19:07:32 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.class.hpp"

class PhoneBook{
private:
//array de 8 contactos
	Contact contacts[8];//deberia ser privada
	// int	how_many_contacts(); 
public:
	PhoneBook();
	~PhoneBook();
	
	void	add_data();
	// void	getPhoneBook(void)	const; imprime toda la agenda
	
};

#endif