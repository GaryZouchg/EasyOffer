// Memory.cpp : Defines the entry point for the console application.
//


#include "Memory.h"
#include <iostream>
#include <memory>
//#define _CRT_SECURE_NO_WARNINGS
//�޸������ָ�������
void arrayPointer1(void)
{
	char  a[] = "Hello";
	a[0] = 'X';
	std::cout << "array a[]  " << a << "  address:" << &a << std::endl;

	char *p = "World";
	//p[0] = 'X';    
	//��ͼ�޸ĳ����ַ������ڴ� ���±���
	std::cout << "pointer p  " << p << "  address:" <<  &p << std::endl;


}

//��ֵ�ͱȽ�
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


//ָ����������ڴ�

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
	chp2 = cha;           //��������ݸ���ָ��ָ��ĵ�ַ
	char *chp3 = &cha[0]; //�����׵�ַ��ֵ��ָ��


	std::cout <<""<< chp2 << std::endl; //Hello
	std::cout << "���鸳ֵ��ָ���ָ��ĵ�ֵַ�� " << &chp2 << std::endl;

	std::cout << "����ĵ�ֵַ�� " << &cha << std::endl;  //��&ch2��ͬ
	std::cout << "����ĵ�һ��Ԫ�صĵ�ֵַ�� " << &chp3 << std::endl;  //Hello
	std::cout << &cha[0] << std::endl;  //��&ch2��ͬ
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
	//b�ȳ�������B�����ü�������Ϊ1����Ϊ0�����Զ��ϵ�B�ռ�û�б��ͷţ���B���е�AҲû�л��ᱻ������A�����ü���Ҳ��ȫû����

	//a���������ͬ��A�����ü�������Ϊ1����Ϊ0�����Զ���A�Ŀռ�Ҳû�б��ͷ�

	spA->wpB = spB;
	std::cout << "spA.use_count() :" << spA.use_count() << std::endl;
	spB->wpA = spA;
	std::cout << "spB.use_count() :" << spB.use_count() << std::endl;

	//std::shared_ptr<B> spB_1 = spA->wpB;  weak_ptr���ܸ�ֵ��share_ptr

	std::shared_ptr<B> spB_1 = spA->wpB.lock();   //ͨ��weakptr��� share_ptr;

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

