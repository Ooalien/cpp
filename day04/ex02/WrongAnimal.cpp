/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:10:44 by abayar            #+#    #+#             */
/*   Updated: 2022/09/29 19:32:21 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "";
    std::cout << "Default Constractor for WrongAnimal called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &x)
{
    *this = x;
    std::cout << "Copy Constractor for WrongAnimal called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &x)
{
    WrongAnimal res;

    this->type = x.getType();
    std::cout << "Copy assignement operator for WrongAnimal called." << std::endl;
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "??? unkown Wronganimal." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destractor for WrongAnimal called." << std::endl;
}
