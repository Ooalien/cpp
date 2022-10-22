/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:44:14 by abayar            #+#    #+#             */
/*   Updated: 2022/10/22 16:16:52 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class  Form
{
	private :
		std::string	name;
		int			grade;
		bool		is_signed;
		const int	tosigne;
		const int	toexecute;
		
	public  :
		Form(const std::string x, int n, int s, int e);
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
