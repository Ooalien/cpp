/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:34:23 by abayar            #+#    #+#             */
/*   Updated: 2022/09/01 14:47:14 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::cout << "Creating the first Zombie, Ali" << std::endl;
	Zombie	ali = Zombie("Ali");
	ali.announce();
	std::cout << "Creating the second Zombie, floki, using the function newZombie"<< std::endl;
    Zombie	*floki = newZombie("floki");
	floki->announce();
	delete floki;
	std::cout << "Creating the third Zombie, Mark, using the function randomChump"<< std::endl;
	randomChump("Mark");
}
