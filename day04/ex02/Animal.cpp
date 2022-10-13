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

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Destractor for Animal called." << std::endl;
}
