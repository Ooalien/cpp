/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:40:03 by abayar            #+#    #+#             */
/*   Updated: 2022/10/09 12:03:32 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    Sed a;
    
    if (ac == 4 && av[2][0] != '\0')
    {
        a.filename = av[1];
        a.find = av[2];
        a.repl = av[3];
        
        a.readf.open(a.filename);
        if (a.readf.fail())
        {
            std::cout << "Error: while opening readfile." << std::endl;
            return (0);
        }
	    a.writef.open(a.filename + ".replace");
        while (getline(a.readf, a.line))
        {
            a.replacee(&a);
            a.writef << a.line << std::endl;
        }
    }
    else
        std::cout << "Error: bad params." << std::endl;
    return (0);
}