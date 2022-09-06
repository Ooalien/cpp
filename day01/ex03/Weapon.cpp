/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:32 by abayar            #+#    #+#             */
/*   Updated: 2022/09/06 12:44:20 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string *type)
{
    this->type = type;
}
const std::string &Weapon::getType( void )
{
    const std::string &res = this->type;
    return (res);
}

void    Weapon::setType(std::string *weaponn)
{
    this->type = weaponn;
}