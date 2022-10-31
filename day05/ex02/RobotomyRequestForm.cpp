
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
    Form("RobotomyRequestForm", 145, 137), target("")
{
    std::cout << "Default Constractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &x):
    Form("RobotomyRequestForm", 145, 137), target(x.target)
{
    std::cout << "Copy Constractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
    Form("RobotomyRequestForm", 145, 137), target(target)
{
    std::cout << "Constractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
    f.Gettosigne();
    return *this;
}

const std::string &RobotomyRequestForm::gettarget() const
{
    return target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &x) const
{
    x.Getgrade();
}
