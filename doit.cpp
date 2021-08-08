#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"./test.h"
using namespace std;
namespace ZD
{
	int a = 10;
	namespace LF
	{
		int b = 20;
	}
}
namespace ZD
{
	int c = 30;
	int d = 40;
}
void test1()
{
	namespace newZD = ZD;
	cout << newZD::a << endl;
}
void test2()
{
	using ZD::d;
	cout << d << endl;
}
void test3()
{
	using namespace ZD;
	cout << "do it anyway" << a << endl;
	cout << c << endl;
	cout << d << endl;
}
void ZD::func1()
{
	cout << "I still love U" << endl;
}
void ZD::func2()
{
	cout << "but I cant be close to U" << endl;
}
int main()
{
	cout << ZD::a << endl;
	//cout << LF::ZD a<< endl;	
	cout << ZD::c << endl;
	test1();
	test2();
	test3();
	//ZD::func1();
	//ZD::func2();
	using namespace ZD;
	func1();
	func2();
	EXIT_SUCCESS;
}
