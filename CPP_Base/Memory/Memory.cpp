// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Memory.h"
#include <iostream>


void arrayPointer(void)
{
	//�޸������ָ�������
	char  a[] = "Hello";
	a[0] = 'X';
	std::cout << "array a[]  " << a << "  address:" << &a << std::endl;

	char *p = "World";
	//p[0] = 'X';    
	//��ͼ�޸ĳ����ַ������ڴ� ���±���
	std::cout << "pointer p  " << p << "  address:" <<  &p << std::endl;


}





int _tmain(int argc, _TCHAR* argv[])
{
	arrayPointer();
	system("pause");
	return 0;
}

