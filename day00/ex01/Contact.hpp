/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:20:03 by abayar            #+#    #+#             */
/*   Updated: 2022/08/29 16:29:06 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstring>
# include <iostream>
# include <string>
#include <iomanip> 

class Contact {
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string pnum;
		std::string secret;
	public:
		void	add(std::string firstname,
			std::string lastname,
			std::string nickname,
			std::string pnum,
			std::string secret);
		void	exit();
		void	search(int i);
		void	display(int i);
};

#endif
