/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:10:44 by abayar            #+#    #+#             */
/*   Updated: 2022/09/29 19:32:21 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "";
    std::cout << "Default Constractor for Animal called." << std::endl;
}

Animal::Animal(Animal &x)
{
    *this = x;
    std::cout << "Copy Constractor for Animal called." << std::endl;
}

Animal &Animal::operator=(Animal const &x)
{
    Animal res;

    this->type = x.getType();
    std::cout << "Copy assignement operator for Animal called." << std::endl;
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "??? unkown animal." << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Destractor for Animal called." << std::endl;
}
