#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &copy)
{
	this->_n = copy._n;
	this->_v = copy._v;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_v.size() >= _n)
		throw FullException();
	this->_v.push_back(n);
}

void	Span::addNumber(iterator begin, iterator end)
{
	if (this->_v.size() + std::distance(begin, end) > _n)
		throw FullException();
	this->_v.insert(this->_v.end(), begin, end);
}

int		Span::shortestSpan(void)
{
	if (this->_v.size() <= 1)
		throw NoSpanException();
	std::sort(this->_v.begin(), this->_v.end());
	int	span = this->_v[1] - this->_v[0];
	for (unsigned int i = 2; i < this->_v.size(); i++)
	{
		if (this->_v[i] - this->_v[i - 1] < span)
			span = this->_v[i] - this->_v[i - 1];
	}
	return (span);
}

int		Span::longestSpan(void)
{
	if (this->_v.size() <= 1)
		throw NoSpanException();
	std::sort(this->_v.begin(), this->_v.end());
	return (this->_v[this->_v.size() - 1] - this->_v[0]);
}

unsigned int	Span::getN(void) const
{
	return (this->_n);
}

std::vector<int>	Span::getVector(void) const
{
	return (this->_v);
}

iterator	Span::begin(void)
{
	return (this->_v.begin());
}

iterator	Span::end(void)
{
	return (this->_v.end());
}

void	Span::printVector(void) const
{
	std::cout << "Vector: ";
	for (unsigned int i = 0; i < this->_v.size(); i++)
		std::cout << this->_v[i] << " ";
	std::cout << std::endl;
}

const char	*Span::FullException::what() const throw()
{
	return (RED "Error: Span is full" END);
}

const char	*Span::NoSpanException::what() const throw()
{
	return (RED "Error: Span is empty or contains only one element" END);
}


std::ostream	&operator<<(std::ostream &out, const Span &span)
{
	out << "Span: " << span.getN() << std::endl;
	span.printVector();
	return (out);
}

