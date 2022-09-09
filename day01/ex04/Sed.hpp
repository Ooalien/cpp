/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:41:48 by abayar            #+#    #+#             */
/*   Updated: 2022/09/08 12:56:52 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <cstring>
# include <iostream>
#include <fstream>
# include <string>
# include <iomanip>

class Sed
{
	public:
		std::ifstream	readf;
		std::ofstream	writef;
		std::string 	line;
		std::string 	find;
		std::string 	repl;
		std::string		filename;
		int				index;
		void	replacee( Sed *a );
};

#endif
