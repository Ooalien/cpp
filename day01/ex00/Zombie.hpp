/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:55:45 by abayar            #+#    #+#             */
/*   Updated: 2022/09/01 14:30:27 by abayar           ###   ########.fr       */
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
        Zombie( std::string name );
        ~Zombie();
		void    announce( void );
        std::string getname( void );
        
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif