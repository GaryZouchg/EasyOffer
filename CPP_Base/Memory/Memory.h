
#include <string.h>
#include <iostream>
#include <memory>

class B;
class A
{
public:
	//std::shared_ptr<B> spB;
	std::weak_ptr<B> wpB;
	void doSomething(){
		std::cout << "do something in A" << std::endl;
	
	}
	~A()
	{
		std::cout << "~A()" << std::endl;
	}
};
class B
{
public:
	//std::shared_ptr<A> spA;
	std::weak_ptr<A> wpA;
	void doSomething(){
		std::cout << "do something in B" << std::endl;

	}
	~B()
	{
		std::cout << "~B()" << std::endl;
	}
};