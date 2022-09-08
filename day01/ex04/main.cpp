/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:40:03 by abayar            #+#    #+#             */
/*   Updated: 2022/09/08 13:07:03 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    Sed a;
    
    if (ac == 4)
    {
        a.filename = av[1];
        a.find = av[2];
        a.repl = av[3];
        std::ifstream	readf(a.filename);
	    std::ofstream	writef(a.filename + ".replace");
        while (getline(readf, a.line))
        {
            // while (a.index < )
            // {
                a.index = a.line.find(av[2]);
                if (a.index == -1)
                {    
                    writef << a.line << std::endl;
                   continue ;
                }
                a.line.erase(a.index, a.find.length());
                a.line.insert(a.index, av[3]);
                writef << a.line;
            // }
            std::cout << std::endl;
        }
        
    }
    else
        std::cout << "Error: bad params." << std::endl;
    return (0);
}