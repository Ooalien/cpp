/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:01:51 by abayar            #+#    #+#             */
/*   Updated: 2022/10/15 14:05:31 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria(std::string const & type)
{
    std::cout << "Constractor AMateria Called" << std::endl;
}

std::string const & getType() const
{
    return (type);
}
