
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm(RobotomyRequestForm &x);
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &f);

		const std::string &gettarget() const;
		void	execute(const Bureaucrat &x) const;

	private:
		RobotomyRequestForm();
		const std::string target;
} ;

#endif