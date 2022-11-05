/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:01:51 by abayar            #+#    #+#             */
/*   Updated: 2022/11/04 08:12:54 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
    // std::cout << "Constractor AMateria Called" << std::endl;
}

AMateria::AMateria(const AMateria &x):type(x.type)
{
    // std::cout << "Copy Constractor AMateria Called" << std::endl;
}

AMateria::~AMateria()
{

}

AMateria    &AMateria::operator=(const AMateria &x)
{
    (void)x;
    return *this;
}

std::string const &AMateria::getType() const
{
    return (type);
}
