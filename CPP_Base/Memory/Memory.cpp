// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Memory.h"
#include <iostream>


void arrayPointer(void)
{
	//修改数组和指针的内容
	char  a[] = "Hello";
	a[0] = 'X';
	std::cout << "array a[]  " << a << "  address:" << &a << std::endl;

	char *p = "World";
	//p[0] = 'X';    
	//企图修改常量字符串的内存 导致报错
	std::cout << "pointer p  " << p << "  address:" <<  &p << std::endl;


}





int _tmain(int argc, _TCHAR* argv[])
{
	arrayPointer();
	system("pause");
	return 0;
}

