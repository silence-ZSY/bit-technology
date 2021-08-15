#include<stdio.h>

int main1()
{
	const int a = 10;
	int* p = (int*)&a;
	*p = 20;
	printf("a:%d\n", a);
	printf("*p:%d\n", *p);
}