
#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &x);
		~Intern();

		Intern      &operator=(const Intern &x);

		Form		*makeForm(const std::string &fname, const std::string &target);

		class FailCreationForm : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Intern couldn't creat the form.";
				}
		};

	private:
		typedef struct formlist
		{
			std::string name;
			Form 		*target;
		} fl;
		
};

#endif
