
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm(ShrubberyCreationForm &x);
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &f);

		const std::string &gettarget() const;
		void	execute(const Bureaucrat &x) const;
		
	private:
		ShrubberyCreationForm();
		const std::string target;
} ;

#endif