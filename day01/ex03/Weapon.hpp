/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:35 by abayar            #+#    #+#             */
/*   Updated: 2022/09/07 10:39:33 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <cstring>
# include <iostream>
# include <string>
# include <iomanip>

class Weapon
{
	private:
		std::string type;
	public :
		Weapon(std::string type);
		const std::string &getType( void );
		void    setType(std::string type);
			
};



#endif