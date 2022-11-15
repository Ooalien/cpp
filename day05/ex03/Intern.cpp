
#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Constractor for Intern is called." << std::endl;
}

Intern::Intern(const Intern &x)
{
    *this = x;
    std::cout << "Copy Constractor for Intern is called." << std::endl;
}

Intern::~Intern()
{
    std::cout << "Destractor for Intern is called." << std::endl;
}

Intern      &Intern::operator=(const Intern &x)
{
    (void)x;
    std::cout << "Copy assignement opperator for Intern is called." << std::endl;
    return *this;
}

Form		*Intern::makeForm(const std::string &fname, const std::string &target)
{
    Form *rs = NULL;
    fl  formlist[4] = {
        {"robotomy request", new RobotomyRequestForm(target)},
        {"shrubbery creation" , new ShrubberyCreationForm(target)},
        {"presidential pardon" , new PresidentialPardonForm(target)},
        {"", NULL}
    };
    for (int i = 0; formlist[i].target != NULL; i++)
    {
        if (formlist[i].name == fname)
            rs = formlist[i].target;
        else
            delete formlist[i].target;
    }
    if (rs != NULL)
        std::cout << "Intern creates " << fname << std::endl;
    else
        throw FailCreationForm();
    return rs;
}
