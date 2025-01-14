/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:32:54 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:47:28 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    br = new Brain();
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

Brain *Dog::GetBrain() const
{
    return this->br;
}

void Dog::setBrain(Brain * br)
{
    this->br = br;
}

Dog::~Dog()
{
    std::cout << "Destractor for Dog called." << std::endl;
    delete br;
}

Dog		&Dog::operator=( Dog const &dogo )
{
   this->type = dogo.getType();
   this->br = new Brain();
   for (int i = 0; i < 100; i++)
        this->br[i] = dogo.GetBrain()[i];
    return *this;
}
