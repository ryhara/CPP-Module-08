#ifndef SPAN_HPP
# define SPAN_HPP

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
#include <vector>
#include <algorithm>
#include <exception>

typedef std::vector<int>::iterator iterator;

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_v;
		Span(void);
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span(void);
		Span				&operator=(const Span &copy);
		void				addNumber(int n);
		void				addNumber(iterator begin, iterator end);
		int					shortestSpan(void);
		int					longestSpan(void);
		unsigned int		getN(void) const;
		std::vector<int>	getVector(void) const;
		iterator			begin(void);
		iterator			end(void);
		void 				printVector(void) const;
		class	FullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Span &span);

#endif