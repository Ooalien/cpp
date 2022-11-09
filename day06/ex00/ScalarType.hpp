
#ifndef SCALARTYPE_HPP
# define SCALARTYPE_HPP

#include <iostream>

class ScalarType
{
	public :
		ScalarType(void);
		ScalarType(const ScalarType& x);
		~ScalarType(void);

		ScalarType  &operator=(const ScalarType &x);

		std::string	str;
		int     	inv;
		float   	fv;
		double  	dv;
		char    	cv;

};

#endif
