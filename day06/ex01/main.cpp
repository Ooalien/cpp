#include "File.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data		*s = new Data;
	Data		*ptr;
	uintptr_t	raw;

	s->str = "Hi, im a Alien who are you?";
	raw = serialize(s);
	ptr = deserialize(raw);
	std::cout << "ptr->str = " << ptr->str << std::endl;
}
