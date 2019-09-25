// Misc.cpp : Defines the entry point for the console application.
//

#include "Misc.h"
#include <iostream>

int isLittleEndian()
{
	//小端序： 低地址低位   
	unsigned short num = 0x1234;
	if (*((char*)&num)==0x34)  //取地址，转换成char指针，在取值
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

