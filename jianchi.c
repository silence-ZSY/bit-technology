#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

const int max = 10;

////攻坚
//
////int add(int a, int b)
////{
////	return a + b;
////}
////
////int sub(int a, int b)
////{
////	return a - b;
////}
////
////int mux(int a, int b)
////{
////	return a * b;
////}
////
////int dive(int a, int b)
////{
////	return a / b;
////}
////
////int main()
////{
////	char cmd[5] = { 0 };
////	char str[] = "add";
////	int a = 0;
////	int b = 0;
////	int i = 0;
////	while (1)
////	{
////		printf("please input cmd: ");
////		scanf("%s %d %d", cmd, &a,& b);
////		if (0 == strcmp(cmd, "add"))
////		{
////			printf("result = %d\n", add(a, b));
////		}
////		else if (0 == strcmp(cmd, "sub"))
////		{
////			printf("result = %d\n", sub(a, b));
////		}
////		else if (0 == strcmp(cmd, "mux"))
////		{
////			printf("result = %d\n", mux(a, b));
////		}
////		else if (0 == strcmp(cmd, "dive"))
////		{
////			printf("result = %d\n", dive(a, b));
////		}
////		else if (0 == strcmp(cmd, "exit"))
////		{
////			exit(0);
////		}
////	}
////	return 0;
////}
//
////int my_strcmp(char s1[], char s2[])
////{
////	int i = 0;
////	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
////	{
////		i++;
////	}
////	if (s1[i] == s2[i])
////	{
////		return 0;
////	}
////	else if (s1[i] > s2[i])
////	{
////		return 1;
////	}
////	else
////	{
////		return -1;
////	}
////	return 0;
////}
////
////int main()
////{
////	printf("please input:");
////	char s1[20] = { 0 };
////	char s2[20] = { 0 };
////	scanf("%s", s1);
////	scanf("%s", s2);
////	int flag = my_strcmp(s1, s2);
////	if (flag == 0)
////	{
////		printf("%s = %s\n", s1, s2);
////	}
////	else if (flag > 0)
////	{
////		printf("%s > %s\n", s1, s2);
////	}
////	else
////	{
////		printf("%s < %s\n", s1, s2);
////	}
////	return 0;
////}
//
////int main()
////{
////	int a[] = { 1,2,3,4,5,6,7,8,9 };
////	int i = 0;
////	int n = sizeof(a) / sizeof(a[0]);
////	for (i = 0;i < n;i++)
////	{
////		printf("%d ", a[i]);
////		printf("%d ", *(a+i));
////	}
////	printf("\n");
////
////	int* p = a;
////	for (i = 0;i < n;i++)
////	{
////		p[i] = i+1;
////	}
////	for (i = 0;i < n;i++)
////	{
////		printf("%d ", *(p + i));
////	}
////	printf("\n");
////	return 0;
////}
//
////int main()
////{
////	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
////	int* p2 = &a[2]; //第2个元素地址
////	int* p1 = &a[1]; //第1个元素地址
////	printf("p1 = %p, p2 = %p\n", p1, p2);
////
////	int n1 = p2 - p1; //n1 = 1
////	int n2 = (int)p2 - (int)p1; //n2 = 4
////	printf("%d\n", (int)p2);
////	printf("%d\n", (int)p1);
////	printf("%d\n", p2);
////	printf("%d\n", p1);
////
////	printf("n1 = %d, n2 = %d\n", n1, n2);
////
////	return 0;
////}
//
////int main()
////{
////	//指针数组
////	int* p[3];
////	int a = 1;
////	int b = 2;
////	int c = 3;
////	int i = 0;
////
////	p[0] = &a;
////	p[1] = &b;
////	p[2] = &c;
////
////	printf("%d  %d\n", sizeof(p), sizeof(p[0]));
////	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++)
////	{
////		printf("%d, ", *(p[i]));
////	}
////	printf("\n");
////
////	return 0;
////}
//
////#include <stdio.h>
////
////int a = 10;
////
////int* getA()
////{
////	return &a;
////}
////
////
////int main()
////{
////	*(getA()) = 111;
////	printf("a = %d\n", a);
////
////	return 0;
////}
//
////int main()
////{
////	char str[] = "hello world";
////	char* p = str;
////	*p = 'm';
////	p++;
////	*p = 'i';//millo world
////	printf("%s\n", str);
////
////	p = "mike jiang";//mike jiang
////	printf("%s\n", p);
////
////	char* q = "test";//t
////	printf("%s\n", q);
////
////	return 0;
////}
//
////字符串问题
//
//	//char* p = "but you do it anyway";
//	//printf("%s\n", p);
//	//char arr[20] = "hello world";
//	//printf("%s\n", arr);
//	//printf("please input:");
//	//scanf("%s", arr);
//	//printf("\n");
//	//printf("input wei");
//	//printf("%s", arr);
//
////	char arr1[30] = " ";
////	int i = 0;
////	for (i = 0;i < 30;i++)
////	{
////		scanf("%c", arr1[i]);
////	}
////	printf("%s", arr1);
////}
//
////int main(int argc, char* argv[])
////{
////
////	//指针数组，它是数组，每个元素都是指针
////	char* a[] = { "aaaaaaa", "bbbbbbbbbb", "ccccccc" };
////	int i = 0;
////
////	printf("argc = %d\n", argc);
////	for (i = 0; i < argc; i++)
////	{
////		printf("%s\n", argv[i]);
////	}
////	return 0;
////}
////
////int main(void)
////{
////	char* p = "11abcd111122abcd333abcd3322abcd3333322qqq";
////	int n = 0;
////
////	while ((p = strstr(p, "abcd")) != NULL)
////	{
////		//能进来，肯定有匹配的子串
////		//重新设置起点位置
////		printf("%s\n", p);
////
////		p = p + strlen("abcd");
////		n++;
////
////		if (*p == 0) //如果到结束符
////		{
////			break;
////		}
////
////	}
////
////	printf("n = %d\n", n);
////
////	return 0;
////}
//
//
////int main()
////{
////	char szInput[256];
////	printf("Enter a sentence: ");
////	gets(szInput);
////	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
////	return 0;
////}
//
////int main()
////{
////	char str[] = "abc\0defg";
////	int n = strlen(str);
////	printf("n = %d\n", n);
////}
//
//int inverse(char* p)
//{
//	if (p == NULL)
//	{
//		return -1;
//	}
//	char* str = p;
//	int begin = 0;
//	int end = strlen(str) - 1;
//	char tmp;
//
//	while (begin < end)
//	{
//		//交换元素
//		tmp = str[begin];
//		str[begin] = str[end];
//		str[end] = tmp;
//
//		begin++;  //往右移动位置
//		end--;	    //往左移动位置
//	}
//
//	return 0;
//}
//
////int main(void)
////{
////	//char *str = "abcdefg"; //文件常量区，内容不允许修改
////	char str[] = "but you do it anyway";
////
////	int ret = inverse(str);
////	if (ret != 0)
////	{
////		return ret;
////	}
////
////	printf("str ========== %s\n", str);
////	return 0;
////}
//
//int main()
//{
//	//int a[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int *p = NULL;
//	//int i = 0;
//	//p = a;
//	//printf("%d\n", *(a + 1));
//	//printf("%d\n", a[p-a]);
//	//printf("%d\n", *(&a[1]));
//
//	//int b = 2;
//	//int* p1 = &b;
//	//printf("%d\n", *&b);
//
//	char* s = "abcde";
//	s += 4;
//	printf("%d", *s);
//
//
//}
//
//int main()
//{
//    char* p[10] = { "abc","aabdfg","dcdbe","abbd","cd" };
//    printf("%s\n", *p);
//    printf("%d\n", strlen(p[4]));
//    system("pause");
//}

/*oid my_strcpy(char* dest, char* src)
{
	while (*src!='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr2);
	return 0;
}

int main()
{
	const int num = 10;
	int* p = &num;
	*p = 20;
	printf("%d\n", num);
	return 0;
}*/
//
//int fn(int a, int n)
//{
//	int i, j;
//	int ret = a;
//	for (i = 1; i < n; i++)
//	{
//		int tmp = 1;
//		for (j = 1; j < n; j++)
//		{
//			tmp *= 10;
//		}
//		ret += tmp;
//	}
//	return ret;
//}
//
//int SumA(int a, int n)
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += fn(a, i);
//	}
//	return sum;
//}

//int factorsum(int number)
//{
//	int i;
//	int sum = 0;
//	if (number == 1)
//	{
//		return number;
//	}
//	for (i = 1; i < number; i++)
//	{
//		if (number % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == number)
//	{
//		return sum;
//	}
//	else
//		return 0;
//}
//
//void PrintPN(int m, int n)
//{
//	int i;
//	int j;
//	int count = 0;
//	for (i = m; i <= n; i++)
//	{
//		if (factorsum(i) == i)
//		{
//			printf("perfect number:%d = ", i);
//			for (j = 1; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					printf("%d + ", j);
//				}
//			}
//			printf("\b\b ");
//			printf("\n");
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		printf("No perfect number\n");
//	}
//}
//
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//	if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//	PrintPN(m, n);
//
//	return 0;
//}
//
//int fib(int n)
//{
//	int a = 1, b = 1, cnt=1;
//	if (n <= 2)
//		return cnt;
//	for (int i = 3; i <= n; i++)
//	{
//		cnt = a + b;
//		a = b;
//		b = cnt;
//	}
//	return cnt;
//}
//

//void PrintFN(int m, int n)
//{
//	int flag = 0;
//	for (int i = 1; fib(i) <= n; i++)
//	{
//		int a = fib(i);
//		if (a >= m && a <= n)
//		{
//			if (!flag)
//				printf("%d", a);
//			else
//				printf(" %d", a);
//			flag++;
//		}
//	}
//	if (!flag)
//		puts("No Fibonacci number");
//}

//int prime(int p)
//{
//	if (p <= 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= p/2; i++)
//	{
//		if (p % i == 0)
//			return 0;
//	}
//	return 1;
//}
//void Goldbach(int n)
//{
//	int a;
//	int count = 0;
//	for (a = 2; a <= n; a++)
//	{
//		if (prime(a) == 1 && prime(n - a) == 1)
//		{
//			count++;
//			if (count == 1)
//			{
//				printf("%d=%d+%d", n, a, n - a);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int m, n, i, cnt;
//
//	scanf("%d %d", &m, &n);
//	if (prime(m) != 0) printf("%d is a prime number\n", m);
//	if (m < 6) m = 6;
//	if (m % 2) m++;
//	cnt = 0;
//	for (i = m; i <= n; i += 2) {
//		Goldbach(i);
//		cnt++;
//		if (cnt % 5) printf(", ");
//		else printf("\n");
//	}
//
//	return 0;
//}

//int reverse(int number)
//{
//	int symbol = 1, x, sum = 0;
//	if (number < 0)
//	{
//		number = -number;
//		symbol = -symbol;
//	}
//	while (number > 0)
//	{
//		x = number % 10;
//		sum = sum * 10 + x;
//		number /= 10;
//	}
//	sum *= symbol;
//	return sum;
//}

//#include <stdio.h>
//
//float sum_diff(float op1, float op2, float* psum, float* pdiff)
//{
//	
//}
//
//int main()
//{
//	float a, b, sum, diff;
//
//	scanf("%f %f", &a, &b);
//	sum_diff(a, b, &sum, &diff);
//	printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
//
//	return 0;
//}
//
///* 你的代码将被嵌在这里 */


//void splitfloat(float x, int* intpart, float* fracpart)
//{
//	*intpart = (int)x;
//	*fracpart = x - *intpart;
//}
//
//int main()
//{
//	float x, fracpart;
//	int intpart;
//
//	scanf("%f", &x);
//	splitfloat(x, &intpart, &fracpart);
//	printf("The integer part is %d\n", intpart);
//	printf("The fractional part is %g\n", fracpart);
//
//	return 0;
//}

//int search(int list[], int n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (list[i] == x)
//			return i;
//	}
//	return -1;
//}

//int ArrayShift(int a[], int n, int m)
//{
//	int temp;
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		temp = a[n-1];
//		for (j = 0; j < n-1; j++)
//		{
//			a[n-1-j] = a[n-2-j];
//		}
//		a[0] = temp;
//	}
//}
//int main()
//{
//	int a[10], n, m;
//	int i;
//
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++) scanf("%d", &a[i]);
//
//	ArrayShift(a, n, m);
//
//	for (i = 0; i < n; i++) {
//		if (i != 0) printf(" ");
//		printf("%d", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//void CountOff(int n, int m, int out[])
//{
//	int i, j, p;
//	int num[20];
//	for (i = 0; i < n; i++)
//	{
//		num[i] = i + 1;
//	}
//	int count = 0;
//	i = 0, j = 0, p = 0;
//	while (count < n)
//	{
//		if (num[i] != -1)//p是报数时的数字
//		{				
//			p++;		//i指向的人没有出局，那么就报数，p增加
//		}
//		if (p == m)     //如果报数报到了指定的数字
//		{						
//			j++;		//j是出局的顺序
//			out[i] = j;
//			p = 0;
//			num[i] = -1;//将离开队伍的人赋值为-1
//			count++;//count 用来记录离开队伍的人的数量
//		}
//		i++;
//		if (i == n)
//		{
//			i = 0;
//		}
//	}
//
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	*(a > b ? &a : &b) = 100;
//	printf("%d",b );
//}

