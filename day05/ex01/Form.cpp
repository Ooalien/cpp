/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:44:16 by abayar            #+#    #+#             */
/*   Updated: 2022/10/21 14:44:17 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string x, int n, int tosigne, int toexe) : name(x), grade(n), toexecute(toexe), tosigne(tosigne)
{
	this->is_signed = false;
	Checkgrade();
	std::cout << "Constractor is Called" << std::endl;
}

Form::Form(Form &x) : name(x.name), grade(x.grade) , toexecute(x.toexecute), tosigne(x.tosigne)
{
	this->is_signed = false;
	Checkgrade();
	// std::cout << "Copy constractor is Called" << std::endl;
}

void Form::Checkgrade()
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Form::~Form()
{
	std::cout << "Destractor is Called" << std::endl;
}

Form &Form::operator=(Form &x)
{
	this->grade = x.Getgrade();
	return *this;
}

std::string Form::Getname() const
{
	return name;
}

int Form::Getgrade() const
{
	return grade;
}

std::ostream &operator<<(std::ostream &os, const Form &x)
{
	os << x.Getname() << ", Form Grade " << x.Getgrade() <<
		"grade needed to signe it " << x.Gettosigne() << " and " << x.Gettoexec()<<
		" to execute it." << std::endl;
	return os;
}

Form &Form::operator++(void)
{
	this->grade--;
	Checkgrade();
	return *this;
}

Form &Form::operator--(void)
{
	this->grade++;
	Checkgrade();
	return *this;
}

Form Form::operator++(int)
{
	Form cpy((*this));
	++(*this);
	Checkgrade();
	return cpy;
}

Form Form::operator--(int)
{
	Form cpy((*this));
	--(*this);
	Checkgrade();
	return cpy;
}

int Form::Gettosigne() const
{
	return this->tosigne;
}

int	Form::Gettoexec() const
{
	return this->toexecute;
}

bool	Form::Getissigne() const
{
	return this->is_signed;
}

void	Form::beSigned(Bureaucrat &x)
{
	if (x.Getgrade() > this->Gettosigne())
		throw GradeTooLowException();
	else
		is_signed = true;
}
