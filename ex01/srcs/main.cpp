#include "Span.hpp"

int main(void)
{
	{
		std::cout << "------ subject test -----" << std::endl;
		Span span(5);
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		std::cout << span << std::endl;
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "longest span: " << span.longestSpan() << std::endl;
		std::cout << std::endl;

		std::cout << "------ subject test plus -----" << std::endl;
		try
		{
			std::cout << "span.addNumber(1): " << std::endl;
			span.addNumber(1);
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
		std::cout << std::endl;
	}

	{
		std::cout << "------  range of iterators addNumber test -----" << std::endl;
		Span span(100);
		std::vector<int> v;
		for (int i = 0; i < 100; i++)
			v.push_back(i);
		try {
			std::cout << "span.addNumber(v.begin(), v.end()): " << std::endl;
			span.addNumber(v.begin(), v.end());
			std::cout << span << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
	}

	{
		std::cout << "------ 10000 numbers test -----" << std::endl;
		Span span(10000);
		std::vector<int> v;
		std::srand(std::time(NULL));
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		try {
			std::cout << "span.addNumber(v.begin(), v.end()): " << std::endl;
			span.addNumber(v.begin(), v.end());
			std::cout << "begin :" << *(span.begin()) << std::endl;
			std::cout << "end - 1: " << *(span.end() - 1) << std::endl;
			std::cout << "span.shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "span.longestSpan(): " << span.longestSpan() << std::endl;
			std::cout << "span.addNumber(1);" << std::endl;
			span.addNumber(1);
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
	}

	{
		std::cout << "----- empty span test -----" << std::endl;
		Span span(100);
		try {
			std::cout << "span is empty" << std::endl;
			std::cout << "span.shortestSpan(): " << span.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
	}

	return (0);
}