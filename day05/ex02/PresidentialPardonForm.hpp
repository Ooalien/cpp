
#ifndef PRESDENTIALPARDONFORM_HPP
# define PRESDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public :
		PresidentialPardonForm(PresidentialPardonForm &x);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &f);

		const std::string &gettarget() const;
		void	execute(const Bureaucrat &x) const;

	private:
		PresidentialPardonForm();
		const std::string target;
} ;

#endif