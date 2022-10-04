/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:32:58 by abayar            #+#    #+#             */
/*   Updated: 2022/09/29 19:32:41 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Default Constractor for WrongCat called." << std::endl;
}

WrongCat::WrongCat(WrongCat &x)
{
    *this = x;
    std::cout << "Copy Constractor for WrongCat called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destractor for WrongCat called." << std::endl;
}


void    WrongCat::makeSound(void) const
{
    std::cout << "Meaw Meaw...!" << std::endl;
}
