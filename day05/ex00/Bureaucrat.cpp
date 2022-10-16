/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:55:46 by abayar            #+#    #+#             */
/*   Updated: 2022/10/16 15:08:17 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string x, int n) : name(x) , grade(n)
{
    std::cout << "Constractor is Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &x) : name(x.name) , grade(x.grade)
{
    std::cout << "Copy constractor is Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destractor is Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &x)
{
    this->grade = x.Getgrade();
    return *this;
}

std::string Bureaucrat::Getname() const
{
    return name;
}

int	Bureaucrat::Getgrade() const
{
    return grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &x)
{
    os << x.Getname() << ", Bureaucrat Grade " << x.Getgrade();
    return os;
}
