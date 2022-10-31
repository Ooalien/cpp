/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:55:11 by abayar            #+#    #+#             */
/*   Updated: 2022/10/27 14:50:17 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f("Certif", 10, 5);
        Bureaucrat b("lme3ti", 11);
        std::cout << b << std::endl;
        f.beSigned(b);
        std::cout << f << std::endl;
        b.signForm(f);
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}