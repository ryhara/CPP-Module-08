#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <array>

int main(void)
{
	std::vector<int>	v;
	std::list<int>		l;
	std::deque<int>		d;
	std::forward_list<int>	f;
	std::array<int, 10>		a;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
		d.push_back(i);
		f.push_front(i);
		a[i] = i;
	}
	std::cout << "vector: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "list: ";
	for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "deque: ";
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "forward_list: ";
	for (std::forward_list<int>::iterator it = f.begin(); it != f.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "array: ";
	for (std::array<int, 10>::iterator it = a.begin(); it != a.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-- vector  --" << std::endl;
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Not found" << END << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-- list --" << std::endl;
	try
	{
		std::cout << *easyfind(l, 5) << std::endl;
		std::cout << *easyfind(l, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Not found" << END << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-- deque --" << std::endl;
	try
	{
		std::cout << *easyfind(d, 5) << std::endl;
		std::cout << *easyfind(d, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Not found" << END << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-- forward_list --" << std::endl;
	try
	{
		std::cout << *easyfind(f, 5) << std::endl;
		std::cout << *easyfind(f, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Not found" << END << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-- array --" << std::endl;
	try
	{
		std::cout << *easyfind(a, 5) << std::endl;
		std::cout << *easyfind(a, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Not found" << END << std::endl;
	}
	return (0);
}