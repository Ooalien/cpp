
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
    Form("PresidentialPardonForm", 25, 5), target("")
{
    // std::cout << "Default Constractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &x):
    Form("PresidentialPardonForm", 25, 5), target(x.target)
{
    // std::cout << "Copy Constractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
    Form("PresidentialPardonForm", 25, 5), target(target)
{
    // std::cout << "Constractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "Destractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
    f.Gettosigne();
    return *this;
}

const std::string &PresidentialPardonForm::gettarget() const
{
    return target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &x) const
{
    Checkexec(x);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
