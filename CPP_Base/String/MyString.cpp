
#include "MyString.h"
#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
// strcpy  ȥ��strcpy �Ĳ���ȫ����
MyString::~MyString(void)
{
	delete[] m_data;
}

MyString::MyString(const char *str)
{
	if (str = nullptr)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length+1];
		strcpy(m_data,str);
	}
}

MyString::MyString(const MyString &other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data,other.m_data);

}

MyString & MyString::operator=(const MyString &other)
{

	if (this == &other)
		return *this;

	delete[] m_data;   //�ͷ��ڴ���Դ

	int length = strlen(other.m_data);
	m_data = new char[length + 1];

	strcpy(m_data, other.m_data);

	return *this;
}



