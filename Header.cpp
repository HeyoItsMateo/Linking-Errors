#include "Header.h"

library::object::object()
{
	std::cout << "I am object!" << std::endl;
}

template<typename T>
void library::print(T input)
{
	std::cout << "This is the input: " << input << std::endl;
}
