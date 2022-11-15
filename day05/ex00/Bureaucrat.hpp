/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:55:49 by abayar            #+#    #+#             */
/*   Updated: 2022/11/14 10:44:05 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class  Bureaucrat
{
	private :
		const std::string   name;
		int           grade;
	public  :
		Bureaucrat(const std::string x, int n);
		Bureaucrat(Bureaucrat &x);
		~Bureaucrat();
		
		Bureaucrat &operator=(Bureaucrat &x);
		Bureaucrat &operator++();
		Bureaucrat &operator--();
		Bureaucrat operator++(int);
		Bureaucrat operator--(int);

		std::string Getname() const;
		int			Getgrade() const;
		void		Checkgrade();
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return "Exception Grade is Too High.";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return "Exception Grade is Too Low.";
				}
		};
} ;

std::ostream &operator<<(std::ostream &os, const Bureaucrat &x);

#endif
