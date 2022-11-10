/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:32:54 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:07:23 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default Constractor for Dog called." << std::endl;
}

Dog::Dog(Dog &x)
{
    *this = x;
    std::cout << "Copy Constractor for Dog called." << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof...!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destractor for Dog called." << std::endl;
}

Dog &Dog::operator=(Dog const &x)
{
    this->type = x.getType();
    return *this;
}