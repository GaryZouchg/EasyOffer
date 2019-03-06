// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Memory.h"
#include <iostream>

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



int _tmain(int argc, _TCHAR* argv[])
{
	arrayPointer1();
	arrayPointer2();
	arrayPointer3();

	getMemory1_test();
	getMemory2_test();
	getMemory3_test();





	system("pause");
	return 0;
}

