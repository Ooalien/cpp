/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:26 by abayar            #+#    #+#             */
/*   Updated: 2022/09/08 08:58:22 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->w = NULL;
}

HumanB::HumanB(std::string name, Weapon &x)
{
    this->name = name;
    this->w = &x;
}

void    HumanB::attack()
{
    if (this->w != NULL)
        std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
    else
        std::cout << this->name << " don't have a weapon." << std::endl;
}

void	HumanB::setWeapon(Weapon &x)
{
    this->w = &x;
}

HumanB::~HumanB()
{
    
}