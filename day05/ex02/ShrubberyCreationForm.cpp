
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
    Form("ShrubberyCreationForm", 145, 137), target("")
{
    std::cout << "Default Constractor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &x):
    Form("ShrubberyCreationForm", 145, 137), target(x.target)
{
    std::cout << "Copy Constractor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
    Form("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "Constractor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destractor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
    f.Gettosigne();
    return *this;
}

const std::string &ShrubberyCreationForm::gettarget() const
{
    return target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &x) const
{
    std::ofstream    file;
    std::string     filename;

    Checkexec(x);
    filename = this->target + "_shrubbery";
    file.open(filename);
    if (file.fail())
        std::cout << "Error: while opening file." << std::endl;
    file << "                                              .         ;  " << std::endl;
    file << "                 .              .              ;%     ;;   " << std::endl;
    file << "                   ,           ,                :;%  %;   " << std::endl;
    file << "                    :         ;                   :;%;'     ., " <<std::endl;  
    file << "           ,.        %;     %;            ;        %;'    ," << std::endl;;
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
    file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
    file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
    file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
    file << "                            ;@%. :@%%  %@@%;       " << std::endl;
    file << "                              %@bd%%%bd%%:;     " << std::endl;
    file << "                                #@%%%%%:;;" << std::endl;
    file << "                                %@@%%%::;" << std::endl;
    file << "                                %@@@%(o);  . '         " << std::endl;
    file << "                                %@@@o%;:(.,'         " << std::endl;
    file << "                            `.. %@@@o%::;         " << std::endl;
    file << "                               `)@@@o%::;         " << std::endl;
    file << "                                %@@(o)::;        " << std::endl;
    file << "                               .%@@@@%::;         " << std::endl;
    file << "                               ;%@@@@%::;.          " << std::endl;
    file << "                              ;%@@@@%%:;;;. " << std::endl;
    file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
    file.close();
    std::cout << "Shrubbery Creation -> " << filename << " " << x << std::endl;
}

