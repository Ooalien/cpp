// 
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
    Form("RobotomyRequestForm", 72, 45), target("")
{
    // std::cout << "Default Constractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &x):
    Form("RobotomyRequestForm", 72, 45), target(x.target)
{
    // std::cout << "Copy Constractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
    Form("RobotomyRequestForm", 72, 45), target(target)
{
    // std::cout << "Constractor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "Destractor for RobotomyRequestForm called" << std::endl;
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
    Checkexec(x);
    std::srand(time(NULL));
    std::cout << "Making some drilling noises..." << std::endl;
    if ((std::rand() % 2) == 1)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed for " << target << std::endl;
}
