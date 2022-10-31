/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:44:14 by abayar            #+#    #+#             */
/*   Updated: 2022/10/27 16:04:13 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class  Form
{
	private :
		std::string	name;
		bool		is_signed;
		const int	tosigne;
		const int	toexecute;
		
	public  :
		Form(const std::string x, int s, int e);
		Form(Form &x);
		~Form();
		
		Form &operator=(Form &x);
		Form &operator++();
		Form &operator--();
		Form operator++(int);
		Form operator--(int);

		std::string Getname() const;
		int			Gettosigne() const;
		int			Gettoexec() const;
		bool		Getissigne() const;

		void		Checkgrade();
		void		beSigned(Bureaucrat x);
		
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
