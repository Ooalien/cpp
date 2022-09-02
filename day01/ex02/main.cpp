/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:57:18 by abayar            #+#    #+#             */
/*   Updated: 2022/09/02 11:38:04 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cstring>
# include <iostream>
# include <string>
# include <iomanip>

int main( void )
{
    std::string s;
    std::string *stringPTR;
    std::string &stringREF = s;

    s = "HI THIS IS BRAIN";
    stringPTR = &s;
    std::cout << "The memory address of the string variable: " << &s << std::endl;
    std::cout << "The memory address held by stringPTR     : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF     : " << &stringREF << std::endl;
    std::cout << "The value of the string variable         : " << s << std::endl;
    std::cout << "The value pointed to by stringPTR        : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF        : " << stringREF << std::endl;
}