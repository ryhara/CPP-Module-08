#include "MutantStack.hpp"
#include <list>

int main(void)
{
	{
		std::cout << BOLD << "--- subject test ---" << END << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "mstack.top() = ";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "mstack.size() = ";
		std::cout <<  mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "print begin to end" << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
	{
		std::cout << BOLD << "--- my test ---" << END << std::endl;
		std::list <int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << "lst.back() = ";
		std::cout << lst.back() << std::endl;
		lst.pop_back();
		std::cout << "lst.size() = ";
		std::cout <<  lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		//[...]
		lst.push_back(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		std::cout << "print begin to end" << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
	{
		std::cout << BOLD << "--- reverse test ---" << END << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "mstack.top() = ";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "mstack.size() = ";
		std::cout <<  mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		++it;
		--it;
		std::cout << "print rbegin to rend" << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
	{
		std::cout << BOLD << "--- string test ---" << END << std::endl;
		MutantStack<std::string> mstack;
		mstack.push("hello");
		mstack.push("world");
		std::cout << "mstack.top() = ";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "mstack.size() = ";
		std::cout <<  mstack.size() << std::endl;
		mstack.push("world");
		mstack.push("42");
		mstack.push("Tokyo");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
	}
}