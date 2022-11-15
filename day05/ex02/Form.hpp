/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:44:14 by abayar            #+#    #+#             */
/*   Updated: 2022/11/14 11:10:31 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class  Form
{
	protected :
		std::string	name;
		bool		is_signed;
		const int	tosigne;
		const int	toexecute;
		
	public  :
		Form(const std::string x, int s, int e);
		Form(Form &x);
		virtual ~Form();
		
		Form &operator=(Form &x);

		std::string Getname() const;
		int			Gettosigne() const;
		int			Gettoexec() const;
		bool		Getissigne() const;

		void		Checkgrade();
		void		beSigned(Bureaucrat x);
		virtual void	execute(const Bureaucrat &x) const = 0;
		void	Checkexec(const Bureaucrat &x) const;
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Exception Grade is Too High.";
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Exception Grade is Too Low.";
				}
		};
		
		class CantExecuteExeption : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Exception Can't execute It.";
				}
		};

		class GradeTooLowToSigneException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Exception Grade is Too Low To Signe It.";
				}
		};

} ;

std::ostream	&operator<<(std::ostream &os, const Form &x);


#endif
