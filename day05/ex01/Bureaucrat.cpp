/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:55:46 by abayar            #+#    #+#             */
/*   Updated: 2022/11/14 11:06:04 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string x, int n) : name(x) , grade(n)
{
    Checkgrade();
    // std::cout << "Constractor is Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &x) : name(x.name) , grade(x.grade)
{
    Checkgrade();
    //std::cout << "Copy constractor is Called" << std::endl;
}

void    Bureaucrat::Checkgrade()
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Destractor is Called" << std::endl;
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

Bureaucrat &Bureaucrat::operator++(void)
{
    this->grade--;
    Checkgrade();
    return *this;
}

Bureaucrat &Bureaucrat::operator--(void)
{
    this->grade++;
    Checkgrade();
    return *this;
}

Bureaucrat Bureaucrat::operator++(int)
{
    Bureaucrat cpy((*this));
    ++(*this);
    Checkgrade();
    return cpy;
}

Bureaucrat Bureaucrat::operator--(int)
{
    Bureaucrat cpy((*this));
    --(*this);
    Checkgrade();
    return cpy;    
}

void		Bureaucrat::signForm(Form &x)
{
    if (x.Getissigne())
        std::cout << this->name << " signed " << x.Getname() << std::endl;
    else
        std::cout << this->name << " couldn't  sign " << x.Getname() << " because Grade is too low please use beSgined member function!" << std::endl;   
}
