/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:20 by abayar            #+#    #+#             */
/*   Updated: 2022/09/07 10:38:22 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &x):w(x)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->w.getType() << std::endl;
}

HumanA::~HumanA()
{
    
}
