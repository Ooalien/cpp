/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:02:35 by abayar            #+#    #+#             */
/*   Updated: 2022/08/29 17:09:41 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	read_line(std::string str, std::string res)
{
	std::cout << str << ": ";
	std::getline(std::cin, res);
	return (res);
}

void	Contact::display(int i)
{
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

int main(void)
{
	int			i,j,c;
	PhoneBook	x;
	std::string	line;
	std::string vfirstname;
	std::string vlastname;
	std::string vnickname;
	std::string vpnum;
	std::string vsecret;
	
	i = 0,j = 0,c = 0;
	while (1)
	{
		std::cout << "***   PhoneBook Devloped by 1337 student. ***" << std::endl;
		std::cout << "***    Entrer one of the three commands!! ***" << std::endl;
		std::cout << "***      'ADD' to add a new contact       ***" << std::endl;
		std::cout << "** 'SEARCH' to display a  specific contact **" << std::endl;
		std::cout << "***      'EXIT' to exit the program       ***" << std::endl;
		std::getline(std::cin, line);
		if (i > 7)
			i = 0;
		if (line.compare("EXIT") == 0)
			exit(0);
		if (line.compare("ADD") == 0)
		{
			vfirstname = read_line("Entre your first name", vfirstname);
			vlastname = read_line("Entre your last name", vlastname);
			vnickname = read_line("Entre your nick name", vnickname);
			vpnum = read_line("Entre your phone number", vpnum);
			vsecret = read_line("Entre your darkest secret", vsecret);
			x.con[i].add(vfirstname, vlastname, vnickname, vpnum, vsecret);
			i++;
			j++;
		}
		if (line.compare("SEARCH") == 0)
		{
			if (j == 0)
				std::cout << "No contact added yet.\n";
			else
			{
				while (c < j && c < 8)
				{
					x.con[c].display(c);
					c++;					
				}
				c = 0;
			}
		}
	}
	return (0);
}