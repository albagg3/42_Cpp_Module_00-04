/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/20 13:27:46 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

class Contact {
private:
	std::string			_name;
	std::string			_last_name;
	std::string			_nickname;
	std::string 		_phone_number;
	std::string 		_darkest_secret;

	std::string 		_getInput(std::string instruction);
	
public:
	
	Contact(void);
	~Contact(void);

	void				setName();
	void				setLastName();
	void				setNickName();
	void				setPhoneNumber();
	void				setDarkestSecret();
	
	const std::string&	getName() const;
	const std::string&	getLastName() const;
	const std::string&	getNickName() const;
	const std::string&	getPhoneNumber() const;
	const std::string&	getDarkestSecret() const;
	void				getContact(void) const;
	
	bool				hasInfo(Contact person) const;

};

#endif

