/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:34:23 by abayar            #+#    #+#             */
/*   Updated: 2022/10/08 11:33:03 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::cout << "Creating the first Zombie, Ali" << std::endl;
	Zombie	ali = Zombie("Ali");
	std::cout << "Creating the second Zombie, floki, using the function newZombie"<< std::endl;
    Zombie	*floki = newZombie("floki");
	std::cout << "Creating the third Zombie, Mark, using the function randomChump"<< std::endl;
	randomChump("Dolly");
	ali.announce();
	floki->announce();
	delete floki;
}
