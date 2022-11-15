/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:55:11 by abayar            #+#    #+#             */
/*   Updated: 2022/11/14 10:44:39 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("lme3ti", 0);
        
        --b;
        std::cout << --b << std::endl;
        /* code */
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
 

    return 0;
}