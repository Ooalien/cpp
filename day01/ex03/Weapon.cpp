/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:32 by abayar            #+#    #+#             */
/*   Updated: 2022/09/07 10:39:45 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}
const std::string &Weapon::getType( void )
{
	return (this->type);
}

void    Weapon::setType(std::string weaponn)
{
	this->type = weaponn;
}