/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:10:44 by abayar            #+#    #+#             */
/*   Updated: 2022/10/07 16:28:43 by abayar           ###   ########.fr       */
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
    this->type = x.getType();
    std::cout << "Copy assignement operator for Animal called." << std::endl;
    return (*this);
}

Brain *Animal::GetBrain() const
{
    return this->br;
}

void Animal::setBrain(Brain * br)
{
    this->br = br;
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
