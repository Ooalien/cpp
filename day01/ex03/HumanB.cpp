/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:26 by abayar            #+#    #+#             */
/*   Updated: 2022/09/06 12:24:38 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::HumanB(std::string name, Weapon x)
{
    this->name = name;
    this->w = &x;
}

void    HumanB::attack()
{
    std::cout << this->name << "attacks with their" << this->w->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon x)
{
    this->w = &x;
}

HumanB::~HumanB()
{
    
}