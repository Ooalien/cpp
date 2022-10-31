
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
    Form("PresidentialPardonForm", 145, 137), target("")
{
    std::cout << "Default Constractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &x):
    Form("PresidentialPardonForm", 145, 137), target(x.target)
{
    std::cout << "Copy Constractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
    Form("PresidentialPardonForm", 145, 137), target(target)
{
    std::cout << "Constractor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destractor for PresidentialPardonForm called" << std::endl;
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
    x.Getgrade();
}
