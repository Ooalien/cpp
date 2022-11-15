/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:44:16 by abayar            #+#    #+#             */
/*   Updated: 2022/11/14 11:32:57 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string x, int tosigne, int toexe) : name(x), tosigne(tosigne), toexecute(toexe)
{
	this->is_signed = false;
	Checkgrade();
}

Form::Form(Form &x) : name(x.name), tosigne(x.tosigne) , toexecute(x.toexecute)
{
	this->is_signed = false;
	Checkgrade();
}

void Form::Checkgrade()
{
	if (this->Gettosigne() > 150 || this->Gettoexec() > 150)
		throw GradeTooLowException();
	else if (this->Gettosigne() < 1 || this->Gettoexec() < 1)
		throw GradeTooHighException();
}

Form::~Form()
{
	// std::cout << "Destractor Form is Called" << std::endl;
}

std::string Form::Getname() const
{
	return name;
}

std::ostream &operator<<(std::ostream &os, const Form &x)
{
	os << x.Getname() << ", Form " << (x.Getissigne()==true?"signed":"not signed") <<
		" grade needed to signe it " << x.Gettosigne() << " and " << x.Gettoexec()<<
		" to execute it.";
	return os;
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

void	Form::beSigned(Bureaucrat x)
{
	if (x.Getgrade() > this->Gettosigne())
	{
		is_signed = false;
		throw GradeTooLowToSigneException();
	}
	else
		is_signed = true;
}


void	Form::Checkexec(const Bureaucrat &x) const
{
	if (!this->is_signed || this->Gettoexec() < x.Getgrade())
		throw CantExecuteExeption();
}
