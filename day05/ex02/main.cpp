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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Form *f = new ShrubberyCreationForm("Home");
        Form &c = *f;
        Bureaucrat b("lme3ti", 5);
        std::cout << b << std::endl;
        b.signForm(*f);
        f->beSigned(b);
        std::cout << c << std::endl;
        b.executeForm(c);
        delete f;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        while(1);
    }
    return 0;
}