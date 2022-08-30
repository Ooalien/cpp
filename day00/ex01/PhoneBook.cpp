/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:02:35 by abayar            #+#    #+#             */
/*   Updated: 2022/08/30 12:22:36 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	read_line(std::string str, std::string res)
{
	std::cout << str << ": ";
	std::getline(std::cin, res);
	if (res.empty())
	{
		std::cout << "exit\n";
		exit(0);
	}
	return (res);
}

void	display(PhoneBook *x, int j)
{
	std::string	i;

	i = read_line("Enter the index of the contact you want to display", i);
	if (i[0] >= '1' && i[0] <= '8' && i.length() == 1)
	{
		if ((i[0] - 48) > j)
			std::cout << "No Contact yet in this index." << std::endl;
		else
			x->con[(i[0] - 49)].search();
	}
	else
		std::cout << "Error: The index is unavailable." << std::endl;
	
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
		line = read_line("<ˀ.ˀ>--> ", line);
		if (i > 7)
			i = 0;
		if (line.compare("EXIT") == 0)
			exit(0);
		else if (line.compare("ADD") == 0)
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
		else if (line.compare("SEARCH") == 0)
		{
			if (j == 0)
				std::cout << "No contact added yet.\n";
			else
			{
				std::cout << "     index|      name|  lastname| "<< \
				" nickname|  phonenum|darcksecret\n";
				while (c < j && c < 8)
				{
					x.con[c].display(c);
					c++;					
				}
				display(&x, j);
				c = 0;
			}
		}
		else
			std::cout << "Error: " << line << " command not found." << std::endl;
	}
	return (0);
}