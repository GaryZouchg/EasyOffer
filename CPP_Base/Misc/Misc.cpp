// Misc.cpp : Defines the entry point for the console application.
//

#include "Misc.h"
#include <iostream>

int isLittleEndian()
{
	//С���� �͵�ַ��λ   
	unsigned short num = 0x1234;
	if (*((char*)&num)==0x34)  //ȡ��ַ��ת����charָ�룬��ȡֵ
	{
		return 1;
	}
	return 0;

}

int main(int argc, char* argv[])
{
	unsigned short i_num = 0x1234;
	if (isLittleEndian())
		std::cout << "little endian . " << std::endl;
	else
		std::cout << "big endian . " << std::endl;


	system("pause");
	return 0;
}

