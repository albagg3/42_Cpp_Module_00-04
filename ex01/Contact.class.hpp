/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/28 19:01:52 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

class Contact {
private:
	std::string	_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	std::string _getInput();
	
public:
	
	Contact(void);
	~Contact(void);

	void	setName();
	void	setLastName();
	// void	setNickName();
	// void	setPhoneNumber();
	// void	setDarkestSecret();
	void	getContact(void) const;

};

#endif

