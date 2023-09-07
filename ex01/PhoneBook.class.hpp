/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:41:02 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 16:15:11 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.class.hpp"

class PhoneBook{
private:
//array de 8 contactos
	Contact 	_contacts[8];//deberia ser privada
	int			_howManyContacts() const; //nos devuelve el numero de contactos que tienen info en el array
	void		_delOldContact();
	std::string	_resizeBigInput(const std::string& input) const;
public:
	PhoneBook();
	~PhoneBook();
	
	void		addData();
	void		getAgendaNames() const;
	void		printDataTable() const;
	void		printContact(std::string number) const;
	// void	getPhoneBook(void)	const; imprime toda la agenda
	
};

#endif