#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//__STDC__ 如果编译器遵循ANSI C，其值为1，否则未定义
//
//	//写日志
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("long.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);
//	}
//	printf("%s\n", __FUNCTION__);
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#define MAX 100
#define STR "hehe"
//为关键字register“起一个更方便的名字”
#define reg register
#define do_forever for(;;)
#define CASE break;case
//int main(void)
//{
//	//int max = MAX;
//	////reg int a;
//	////register int a;
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//	do_forever;
//	return 0;
//}

//宏,是替换不是传参
//#define SQUART(X) X*X 
//int main(void)
//{
//	/*int ret = SQUART(5);
//	printf("%d\n", ret);
//	 ret = 5 * 5;
//	printf("%d\n", ret);*/
//
//	int ret = SQUART(5 + 1);
//	//5+1*5+1
//	printf("%d\n", ret);
//	 ret = SQUART((5 + 1));
//	printf("%d\n", ret);
//
//
//	return 0;
//}


//写宏的时候不要吝啬括号
//宏参数和#define定义中可以出现其他#define定义的变量。但对于宏，不能出现递归
//当预处理器搜索#define定义的符号时，字符串常量的内容并不被搜索
//#define DOUBLE(X) ((X)+(X))
//int main(void)
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//ret=10*（（5）+（5））
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main(void)
//{
//	int a=10;
//	int b = 20;
//	print(a);
//	print(b);
//	return 0;
//}

#define PRINT(X) printf("the value of "#X" is %d\n",X);
//#  把宏的参数插入到字符串中
//int main(void)
//{
//	/*printf("hello world\n");
//	printf("hello " "world\n");
//	printf("he""llo " "world\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of""a""is %d\n",a);
//	PRINT(b);
//	//printf("the value of""b""is %d\n",a);
//
//	return 0;
//}

//## 把##两端符号连接起来
//#define CAT(X,Y) X##Y
//int main(void)
//{
//	int Class84 = 2021;
//	//printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}


//带副作用的宏参数
//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//int main(void)
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max =((a++)>(b++)?(a++):(b++)) ;
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}


//宏在某些时候于函数较为相似
//宏通常被应用于执行简单的运算。比如两个数中找出较大值
//#define MAX(A,B) ((A)>(B)?(A):(B))
//那为什么不用函数来完成这个任务?原因有二:
//1.用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比函数在程序的规模和速度方面更胜一筹。
//2.更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之这个宏怎可以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的。
//当然和宏相比函数也有劣势的地方 :
//1.每次使用宏的时候, 一份宏定义的代码将插入到程序中。 除非宏比较短，否则可能大幅度增加程序的长度。
//2.宏是没法调试的。
//3.宏由于类型无关，也就不够严谨。
//4.宏可能会带来运算符优先级的问题，导致程容易出现错。
//宏有时候可以做函数做不到的事情。比如 : 宏的参数可以出现类型，但是函数做不到。
//#define SIZEOF(type) sizeof(type)
//#define MALLOC(num,type) malloc(num*sizeof(type))
//int main(void)
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	free(p);
//
//	return 0;
//}

//#undef 用于移出宏定义
#define MAX 100
int main(void)
{
	printf("%d\n", MAX);
#undef MAX
	//printf("%d\n", MAX);

	return 0;
}