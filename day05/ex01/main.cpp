/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:55:11 by abayar            #+#    #+#             */
/*   Updated: 2022/11/14 11:07:26 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f("Certif", 10, 5);
        Bureaucrat b("lme3ti", 4);
        std::cout << b << std::endl;
        f.beSigned(b);
        b.signForm(f);
        std::cout << f << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}