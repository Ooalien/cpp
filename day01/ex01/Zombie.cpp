/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:23:28 by abayar            #+#    #+#             */
/*   Updated: 2022/09/02 10:52:31 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie( void )
{
    std::cout << this->getname() << " is dead." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getname( void )
{
    return (this->name);
}

void    Zombie::setname(std::string name)
{
    this->name = name;
}