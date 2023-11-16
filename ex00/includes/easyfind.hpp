#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#define END				"\033[0m"
#define BOLD			"\033[1m"
#define BLACK			"\033[30m"
#define RED				"\033[31m"
#define GREEN			"\033[32m"
#define YELLOW			"\033[33m"
#define BLUE			"\033[34m"
#define MAGENTA			"\033[35m"
#define CYAN			"\033[36m"
#define WHITE			"\033[37m"
#define UNDERLINE		"\033[4m"
#define BOLD_UNDERLINE	"\033[1;4m"

#include <iostream>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T &container, const int n)
{
	typename T::iterator target;

	target = std::find(container.begin(), container.end(), n);
	if (target == container.end())
		throw std::runtime_error("Not found");
	return (target);
}

#endif