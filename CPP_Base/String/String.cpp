// String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <assert.h>


char * myStrcpy(char *strDest, char *strSrc)
{
	assert((strDest != nullptr) && (strSrc != nullptr));  // 空指针是不能使用的

	char *p = strDest;
	while ((*strDest++ = *strSrc++) != '\0')
		NULL;
	return p;

}



int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

