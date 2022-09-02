/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:48:41 by abayar            #+#    #+#             */
/*   Updated: 2022/09/02 10:51:50 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zz;

    zz = zombieHorde(7, "Ali");

    for (size_t i = 0; i < 7; i++)
    {
        zz[i].announce();   /* code */
    }
    delete [] zz;
}