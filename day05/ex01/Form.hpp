/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:44:14 by abayar            #+#    #+#             */
/*   Updated: 2022/10/21 14:44:48 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class  Form
{
	private :
		std::string   name;
		int           grade;
	public  :
		Form(const std::string x, int n);
		Form(Form &x);
		~Form();
		
		Form &operator=(Form &x);
		Form &operator++();
		Form &operator--();
		Form operator++(int);
		Form operator--(int);

		std::string Getname() const;
		int			Getgrade() const;
		void		Checkgrade();
		
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
} ;

std::ostream &operator<<(std::ostream &os, const Form &x);


#endif
