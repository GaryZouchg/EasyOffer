// Memory.cpp : Defines the entry point for the console application.
//


#include "Memory.h"
#include <iostream>
#include <memory>
//#define _CRT_SECURE_NO_WARNINGS
//修改数组和指针的内容
void arrayPointer1(void)
{
	char  a[] = "Hello";
	a[0] = 'X';
	std::cout << "array a[]  " << a << "  address:" << &a << std::endl;

	char *p = "World";
	//p[0] = 'X';    
	//企图修改常量字符串的内存 导致报错
	std::cout << "pointer p  " << p << "  address:" <<  &p << std::endl;


}

//赋值和比较
void arrayPointer2(void)
{
	char a[] = "Hello";
	char b[10];

	// array
	strcpy(b, a);
	if (strcmp(b, a) == 0)
	{
		std::cout << "array assignment  a:" << a << "  b:" << b << std::endl;
	}

	int len = strlen(a);

	char *p = (char*)malloc(sizeof(char)*(len + 1));
	// array
	strcpy(p, a);
	if (strcmp(p, a) == 0)
	{
		std::cout << "pointer assignment  a:" << a << "  p:" << p << std::endl;
	}

	free(p);

}

//sizeof()
void arrayPointer3(void)
{
	char a[] = "Hello world";

	char *p = a;

	std::cout << "array sizeof    :  " << sizeof(a) << std::endl;
	std::cout << "pointer sizeof  :  " << sizeof(p) << std::endl;


}


//指针参数传递内存

void getMemory1(char **p, int num)
{
	*p = (char*)malloc(sizeof(char)*num);

}

void getMemory1_test()
{
	char *p = NULL;
	getMemory1(&p, 100);
	strcpy(p, "hello word");

	std::cout << "getMemory1(): " << p << std::endl;

	free(p);
}

void getMemory2(char *p, int num)
{
	p = (char*)malloc(sizeof(char)*num);

}

void getMemory2_test()
{
	char *p = NULL;
	getMemory2(p, 100);
	/*strcpy(p, "hello word");*/ //access violation

	//std::cout << "getMemory1(): " << p << std::endl;
}

char * getMemory3(int num)
{
	char *P = (char*)malloc(sizeof(char)*num);
	return P;
}

void getMemory3_test()
{
	char *str = NULL;
	str = getMemory3(100);
	strcpy(str, "hello world"); 
	//access violation

	std::cout << "getMemory3(): " << str << std::endl;
}


void arrayPointerdiff()
{
	char  cha[] = "Hello";
	
	char *chp = "World";


	std::cout << cha + 1 << std::endl;
	std::cout << chp + 1 << std::endl;
	std::cout << cha[1] << std::endl;

	std::cout << *(chp + 1) << std::endl;
	std::cout << *(cha+1) << std::endl;

	std::cout << *chp << std::endl;
	std::cout << *cha << std::endl;  


	char *chp2 = NULL;
	chp2 = cha;           //数组的内容赋给指针指向的地址
	char *chp3 = &cha[0]; //数组首地址赋值给指针


	std::cout <<""<< chp2 << std::endl; //Hello
	std::cout << "数组赋值个指针后，指针的地址值： " << &chp2 << std::endl;

	std::cout << "数组的地址值： " << &cha << std::endl;  //与&ch2不同
	std::cout << "数组的第一个元素的地址值： " << &chp3 << std::endl;  //Hello
	std::cout << &cha[0] << std::endl;  //与&ch2不同
	std::cout << chp3 << std::endl;  //Hello


}

void cycleReference()
{
	std::shared_ptr<A> spA(new A);
	std::shared_ptr<B> spB(new B);

	//spA->spB = spB;
	//std::cout << "spB.use_count() :" << spB.use_count() << std::endl;
	//spB->spA = spA;
	//std::cout << "spA.use_count() :" << spA.use_count() << std::endl;
	//b先出作用域，B的引用计数减少为1，不为0，所以堆上的B空间没有被释放，且B持有的A也没有机会被析构，A的引用计数也完全没减少

	//a后出作用域，同理A的引用计数减少为1，不为0，所以堆上A的空间也没有被释放

	spA->wpB = spB;
	std::cout << "spA.use_count() :" << spA.use_count() << std::endl;
	spB->wpA = spA;
	std::cout << "spB.use_count() :" << spB.use_count() << std::endl;

	//std::shared_ptr<B> spB_1 = spA->wpB;  weak_ptr不能赋值给share_ptr

	std::shared_ptr<B> spB_1 = spA->wpB.lock();   //通过weakptr获得 share_ptr;

}


int main(int argc, char* argv[])
{
	arrayPointer1();
	arrayPointer2();
	arrayPointer3();

	getMemory1_test();
	getMemory2_test();
	getMemory3_test();

	arrayPointerdiff();


	cycleReference();
	system("pause");
	return 0;
}

