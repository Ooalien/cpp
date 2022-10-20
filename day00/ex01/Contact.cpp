/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:32:43 by abayar            #+#    #+#             */
/*   Updated: 2022/10/18 13:40:54 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::add(std::string firstname, std::string lastname, std::string nickname, std::string pnum, std::string secret)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->nickname = nickname;
    this->pnum = pnum;
    this->secret = secret;
}

void	Contact::search()
{
	std::cout << "First name  :  " << this->firstname << std::endl;
	std::cout << "Last name   :  " << this->lastname << std::endl;
	std::cout << "Nickname    :  " << this->nickname << std::endl;
	std::cout << "Phone number:  " << this->pnum << std::endl;
	std::cout << "darksecret  :  " << this->secret << std::endl;
}

void	Contact::display(int i)
{
	std::cout << std::setw(10);
	std::cout << i + 1 << "|";
	if (this->firstname.length() >= 10)
		std::cout << this->firstname.substr(0,9) << ".|";
	else
	{
		std::cout << std::setw(10);
		std::cout << this->firstname << "|";
	}	
	if (this->lastname.length() >= 10)
		std::cout << this->lastname.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << this->lastname << "|";
	if (this->nickname.length() >= 10)
		std::cout << this->nickname.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	if (this->pnum.length() >= 10)
		std::cout << this->pnum.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << this->pnum << "|";
	if (this->secret.length() >= 10)
		std::cout << this->secret.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << this->secret << std::endl;
}
