#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &mutantstack) : std::stack<T>(mutantstack) {}
		MutantStack &operator=(const MutantStack &mutantstack)
		{
			if (this != &mutantstack)
				std::stack<T>::operator=(mutantstack);
			return (*this);
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
		reverse_iterator rend() { return (std::stack<T>::c.rend()); }
};

#endif