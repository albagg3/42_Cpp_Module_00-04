/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:29 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/25 12:49:17 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

class Contact {
private:
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string darkest_secret;
	
public:
	
	Contact(void);
	// Contact(std::string n, std::string ln, std::string nck_n, std::string ph_n, std::string drk_scrt);
	~Contact(void);

	void	setName();
	void	setLastName();
	void	setNickName();
	void	setPhoneNumber();
	void	setDarkestSecret();
	void	getContact(void) const;

};

#endif

