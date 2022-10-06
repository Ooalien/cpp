/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:32:58 by abayar            #+#    #+#             */
/*   Updated: 2022/10/06 12:03:50 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default Constractor for Cat called." << std::endl;
}

Cat::Cat(Cat &x)
{
    *this = x;
    std::cout << "Copy Constractor for Cat called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destractor for Cat called." << std::endl;
}

Brain *Cat::GetBrain() const
{
    return this->br;
}

void Cat::setBrain(Brain * br)
{
    this->br = br;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meaw Meaw...!" << std::endl;
}
