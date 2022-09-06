/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:28 by abayar            #+#    #+#             */
/*   Updated: 2022/09/06 12:21:30 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"

class HumanB 
{
	private:
		Weapon      *w;
		std::string name;
	public :
		HumanB(std::string name);
		HumanB(std::string name, Weapon x);
		~HumanB();
		void	setWeapon(Weapon x);
		void    attack();
};



#endif