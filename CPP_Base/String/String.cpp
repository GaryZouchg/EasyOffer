// String.cpp : Defines the entry point for the console application.
//


#include <assert.h>


char * myStrcpy(char *strDest, char *strSrc)
{
	assert((strDest != nullptr) && (strSrc != nullptr));  // 空指针是不能使用的

	char *p = strDest;
	while ((*strDest++ = *strSrc++) != '\0')
		NULL;
	return p;

}



int main(int argc, char* argv[])
{
	return 0;
}

