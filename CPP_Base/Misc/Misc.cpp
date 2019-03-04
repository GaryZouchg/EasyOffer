// Misc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Misc.h"
#include <iostream>

int isLittleEndian()
{
	//–°∂À–Ú£∫ µÕµÿ÷∑µÕŒª   
	unsigned short num = 0x1234;
	if (*((char*)&num)==0x34)
	{
		return 1;
	}
	return 0;

}

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned short i_num = 0x1234;
	if (isLittleEndian())
		std::cout << "little endian . " << std::endl;
	else
		std::cout << "big endian . " << std::endl;


	system("pause");
	return 0;
}

