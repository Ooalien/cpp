/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:23:32 by abayar            #+#    #+#             */
/*   Updated: 2022/09/02 10:44:30 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstring>
# include <iostream>
# include <string>
# include <iomanip> 

class Zombie {
	private:
		std::string name;
	public:
        Zombie();
        ~Zombie();
		void    announce( void );
        std::string getname( void );
        void    setname(std::string name);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif