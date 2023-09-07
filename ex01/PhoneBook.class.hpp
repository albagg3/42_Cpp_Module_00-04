/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:41:02 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 18:08:15 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.class.hpp"

class PhoneBook{
	
private:
	Contact 	_contacts[8];
	int			_howManyContacts() const; 
	void		_delOldContact();
	std::string	_resizeBigInput(const std::string& input) const;
	
public:
	PhoneBook();
	~PhoneBook();
	
	void		addData();
	void		getAgendaNames() const;
	void		printDataTable() const;
	void		printContact(std::string number) const;	
};

#endif