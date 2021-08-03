#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//void BubbleSort(int* arr, int len)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0;i < len;i++)
//	{
//		for (j = 1;j < len-i;j++)
//		{
//			if (arr[j] > arr[j-1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j-1];
//				arr[j-1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("please input:");
//	for (i = 0;i < sz;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("input is:");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	BubbleSort(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}

//void BubbleSort(int* arr, int len)
//{
//	for (int i = 0; i < len; ++i)
//	{
//		for (int j = 1; j < len - i; ++j)
//		{
//			if (*(arr + j) < *(arr + j - 1))
//			{
//				// int temp = *(arr + j);
//				// *(arr + j) = *(arr + j - 1);
//				// *(arr + j - 1) = temp;
//				swap(arr + j, arr + j - 1);
//			}
//		}
//	}
//}
//
//
//int main(void)
//{
//	int num[N] = { 0 };
//
//	srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < N; ++i)
//	{
//		num[i] = rand() % 150 - 50;
//	}
//
//	BubbleSort(num, sizeof(num) / sizeof(int));
//
//	for (int i = 0; i < N; ++i)
//		printf("%d ", num[i]);
//	printf("\n");
//	return 0;
//}

//void delay(unsigned int xms)  // xms代表需要延时的毫秒数
//{
//	unsigned int x, y;
//	for (x = xms;x > 0;x--)
//		for (y = 110;y > 0;y--);
//}
//int main()
//{
//	while (1)
//	{
//		srand((unsigned int)time(NULL));
//		int i = rand();
//		int j = rand() % 150 - 50;
//		printf("%d\n", i);
//		delay(10000000);
//		printf("%d\n", j);
//	}
//		return 0;
//}

//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	printf("a=%d,b=%d\n", a, b);
//	printf("%u  %u\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	char a = -128;
//	char b = 128;
//	int i = -20;
//	unsigned int j = 10;
//	printf("%u\n", b);
//	printf("%u\n", a);
//	printf("%d\n", i + j);
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//	unsigned char i = 0;
//
//	for (i = 0;i <= 255;i++)
//	{
//		printf("%d hello world\n",i);
//	}
//	return 0;
//}

//void fun1()
//{
//	int i = 0;
//	i++;
//	printf("i = %d\n", i);
//}
//
//void fun2()
//{
//	//静态局部变量，没有赋值，系统赋值为0，而且只会初始化一次
//	static int a;
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main(void)
//{
//	fun1();
//	fun1();
//	fun2();
//	fun2();
//
//	return 0;
//}

//int e;
//static int f;
//int g = 10;
//static int h = 10;
//int main()
//{
//	int a;
//	int b = 10;
//	static int c;
//	static int d = 10;
//	char* i = "test";
//	char* k = NULL;
//
//	printf("&a\t %p\t //局部未初始化变量\n", &a);
//	printf("&b\t %p\t //局部初始化变量\n", &b);
//
//	printf("&c\t %p\t //静态局部未初始化变量\n", &c);
//	printf("&d\t %p\t //静态局部初始化变量\n", &d);
//
//	printf("&e\t %p\t //全局未初始化变量\n", &e);
//	printf("&f\t %p\t //全局静态未初始化变量\n", &f);
//
//	printf("&g\t %p\t //全局初始化变量\n", &g);
//	printf("&h\t %p\t //全局静态初始化变量\n", &h);
//
//	printf("i\t %p\t //只读数据(文字常量区)\n", i);
//
//	k = (char*)malloc(10);
//	printf("k\t %p\t //动态分配的内存\n", k);
//
//	return 0;
//}

//int main()
//{
//int a[10];
//
//memset(a, 98, sizeof(a));
////memset(a, 97, sizeof(a));
//int i = 0;
//for (i = 0; i < 10; i++)
//{
//	printf("%c\n", a[i]);
//}
//return 0;
//}
//
////int main()
////{
////	int i = 97;
////	char j = '9';
////	char m = 98;
////	char n = '98';
////	char a = 49;
////	int b = 38;
////	printf("%c %c %c %c %c %c", i,j,m,n,a,b);
////}
//
//struct stu
//{
//	int num;
//	char name[20];
//	char sex;
//	float score;
//};
//
//int main()
//{
//	struct stu boy[5] = {
//		{ 101, "Li ping", 'M', 45 },
//		{ 102, "Zhang ping", 'M', 62.5 },
//		{ 103, "He fang", 'F', 92.5 },
//		{ 104, "Cheng ling", 'F', 87 },
//		{ 105, "Wang ming", 'M', 58 } };
//	int i = 0;
//	int c = 0;
//	float ave, s = 0;
//	for (i = 0;i < 5;i++)
//	{
//		s += boy[i].score;
//		if (boy[i].score < 60)
//		{
//			c += 1;
//		}
//	}
//	printf("s=%f\n", s);
//	ave = s / 5;printf("average=%f\ncount=%d\n\n", ave, c); //打印平均分与不及格人数
//
//
//	for (i = 0; i < 5; i++)
//	{
//		printf(" name=%s,  score=%f\n", boy[i].name, boy[i].score);
//		// printf(" name=%s,  score=%f\n", (boy+i)->name, (boy+i)->score);
//
//	}
//
//	return 0;
//}

//struct person
//{
//	char name[20];
//	char sex;
//};
//
//struct stu
//{
//	int id;
//	struct person info;
//};
//
//int main()
//{
//	struct stu s[2] = { 1, "lily", 'F', 2, "yuri", 'M' };
//
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("id = %d\tinfo.name=%s\tinfo.sex=%c\n", s[i].id, s[i].info.name, s[i].info.sex);
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };
//	printf("please input:\n");
//	scanf("%s", arr);
//	printf("%s\n", arr);
//
//	char* p = "but you do it anyway";
//	for (int i = 0;i < 20;i++)
//	{
//		printf("%c\n", *(p + i));
//	}
//
//}
//int main() {
//
//	int* p1 = 0x1234;
//	int*** p2 = 0x1111;
//
//	printf("p1 size:%d\n", sizeof(p1));
//	printf("p2 size:%d\n", sizeof(p2));
//
//
//	//指针是变量，指针本身也占内存空间，指针也可以被赋值
//	int a = 10;
//	p1 = &a;
//
//	printf("p1 address:%p\n", &p1);
//	printf("p1 address:%p\n", p1);
//	printf("a address:%p\n", &a);
//
//}

//int main()
//{
//
//	//定义指针
//	int* p = NULL;
//	//指针指向谁，就把谁的地址赋给指针
//	int a = 10;
//	p = &a;
//	*p = 20;//*在左边当左值，必须确保内存可写
//	//*号放右面，从内存中读值
//	int b = *p;
//	//必须确保内存可写
//	printf("a:%d\n", a);
//	printf("*p:%d\n", *p);
//	printf("b:%d\n", b);
//	char* str = NULL;
//	char str1[20] = "hello world!";
//	str = str1;
//	*str = "but you do it anyway";
//	printf("%s\n", str);
//}

//int main()
//{
//	int a = 0xaabbccdd;
//	unsigned int* p1 = &a;
//	unsigned char* p2 = &a;
//
//	//为什么*p1打印出来正确结果？
//	printf("%x\n", *p1);
//	//为什么*p2没有打印出来正确结果？
//	printf("%x\n", *p2);
//
//	//为什么p1指针+1加了4字节？
//	printf("p1  =%d\n", p1);
//	printf("p1+1=%d\n", p1 + 1);
//	//为什么p2指针+1加了1字节？
//	printf("p2  =%d\n", p2);
//	printf("p2+1=%d\n", p2 + 1);
//}
//int main()
//{
//	int b=20;
//	int* q = &b; //0级指针
//	int** t = &q;
//	int*** m = &t;
//	printf("%p\n", &b);
//	printf("%p\n", q);
//	printf("%p\n", *t);
//	printf("%p\n", **m);
//	printf("%d\n", q);
//	printf("%d\n", *t);
//	printf("%d\n", **m);
//
//}
//int func1() { return 10; }
//
//void func2(int a) {
//	a = 100;
//}
//指针的意义_间接赋值
//int main() {
//	int a = 0;
//	a = func1();
//	printf("a = %d\n", a);
//
//	//为什么没有修改？
//	func2(a);
//	printf("a = %d\n", a);
//	int b = 0;
//	func2(b);
//	printf("b=%d\n", b);
//}

//指针的间接赋值
//void func3(int* a) {
//	*a = 100;
//}
//
//int main()
//{
//	int a = 0;
//	a = func1();
//	printf("a = %d\n", a);
//
//	//修改
//	func3(&a);
//	printf("a = %d\n", a);
//}

//int main()
//{
//	char* p = "but you do it anyway!";
//	for (int i = 0;i < 30;i++)
//	{
//		printf("%c\n", *(p + i));
//	}
//	return 0;
//}

//void print1(int arr[][5], int x, int y)
//{
//	int i = 0;int j = 0;
//	for (i = 0;i < x;i++)
//	{
//		for (j = 0;j < y;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0;i < x;i++)
//	{
//		int j = 0;
//		for (j = 0;j < y;j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			//printf("%d", p[i][j]);
//			//printf("%d", *(p[i] + j));
//			//printf("%d", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);
//	return 0;
//}

//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", *(arr+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,3,4,5,6,7,8,9,1,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//void test(int** p)
//{
//	printf("%d\n", **p);
//}
//
//int main()
//{
//	int a = 678;
//	int b = 97;
//	printf("%c  %c\n", a,b);
//	return 0;
//}

//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//
//int Count_Dight(const int N, const int D)
//{
//
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x\n", ptr1[-1], *ptr2);
//	printf("%d", (&(ptr1[-1]) - *ptr2));
//	return 0;
//}

//void reverse(char* str)
//{
//	int len = strlen(str) - 1;
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	//scanf("%s", arr);
//	//printf("\n");
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#define MIN(x,y) (x)<(y) ? (x):(y)
//int main(){
//	int i = 10, j = 15, k;
//	k = 10 * MIN(i, j);
//	printf("%d\n", k);
//	return 0;
//}

//int main()
//{
//	char arr[] = "but you do it anyway";
//	printf("%s\n", arr);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S *tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'b';
//	tmp->d = 3.14;
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void pyramid(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    pyramid(n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//
//void pyramid(int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1;i <= n;i++)
//    {
//        for (j = 1;j <= n-i;j++)
//        {
//            printf(" ");
//        }
//        for (j = 1;j <= i;j++)
//        {
//            printf("%d ", i);
//            if (i == j)
//            {
//                printf("\n");
//            }
//        }
//        
//    }
//}
//

//int even(int n)
//{
//    if (n % 2 == 0)
//        return 1;
//    else
//        return 0;
//}
//
//int OddSum(int List[], int N)
//{
//    int sum = 0;
//    for (int i = 0;i < N;i++)
//    {
//        if(even(List[i]==0))
//        sum += List[i];
//    }
//    return sum;
//}
//
//#define MAXN 10
//
//int even(int n);
//int OddSum(int List[], int N);
//
//int main()
//{
//    int List[MAXN], N, i;
//
//    scanf("%d", &N);
//    printf("Sum of ( ");
//    for (i = 0; i < N; i++) {
//        scanf("%d", &List[i]);
//        if (even(List[i]) == 0)
//            printf("%d ", List[i]);
//    }
//    printf(") = %d\n", OddSum(List, N));
//
//    return 0;
//}
//int main()
//{
//	int a = -1, b = -2;
//	printf("%d  %d", a % 2, b % 2);
//	return 0;
//}

//double dist(double x1, double y1, double x2, double y2)
//{
//	return sqrt(pow(fabs(x2 - x1), 2) + pow(fabs(y2 - y1), 2));
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= i - 1;j++)
//		{
//			printf(" ");
//		}
//		for (j = 1;j <= n - i+1;j++)
//		{
//			printf("%d ", n-i+1);
//		}
//		printf("\n");
//	}
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 1;i <= 4;i++)
//    {
//        for (j = 1;j <= i - 1;j++)
//        {
//            printf(" ");
//        }
//        for (j = 1;j <= 4 - i + 1;j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}d

//void foo(int b[][3])
//{
//
//	b++;
//
//	b[1][1] = 9;
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 3;j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//void main()
//{
//
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	foo(a);
//
//	printf(" %d \n", a[2][1]);
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 3;j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

int main()
{
	FILE* pfWrite = fopen("TEST.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputc('b', pfWrite);
	fputc('u', pfWrite);
	fputc('t', pfWrite);

	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}