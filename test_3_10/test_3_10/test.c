#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//__STDC__ �����������ѭANSI C����ֵΪ1������δ����
//
//	//д��־
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
//Ϊ�ؼ���register����һ������������֡�
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

//��,���滻���Ǵ���
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


//д���ʱ��Ҫ��������
//�������#define�����п��Գ�������#define����ı����������ں꣬���ܳ��ֵݹ�
//��Ԥ����������#define����ķ���ʱ���ַ������������ݲ���������
//#define DOUBLE(X) ((X)+(X))
//int main(void)
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//ret=10*����5��+��5����
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
//#  �Ѻ�Ĳ������뵽�ַ�����
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

//## ��##���˷�����������
//#define CAT(X,Y) X##Y
//int main(void)
//{
//	int Class84 = 2021;
//	//printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}


//�������õĺ����
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


//����ĳЩʱ���ں�����Ϊ����
//��ͨ����Ӧ����ִ�м򵥵����㡣�������������ҳ��ϴ�ֵ
//#define MAX(A,B) ((A)>(B)?(A):(B))
//��Ϊʲô���ú���������������?ԭ���ж�:
//1.���ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ���Ժ�Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ�
//2.��Ϊ��Ҫ���Ǻ����Ĳ�����������Ϊ�ض������͡����Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á���֮��������������������Ρ������͡������͵ȿ������� > ���Ƚϵ����͡����������޹صġ�
//��Ȼ�ͺ���Ⱥ���Ҳ�����Ƶĵط� :
//1.ÿ��ʹ�ú��ʱ��, һ�ݺ궨��Ĵ��뽫���뵽�����С� ���Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ��ȡ�
//2.����û�����Եġ�
//3.�����������޹أ�Ҳ�Ͳ����Ͻ���
//4.����ܻ������������ȼ������⣬���³����׳��ִ�
//����ʱ����������������������顣���� : ��Ĳ������Գ������ͣ����Ǻ�����������
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

//#undef �����Ƴ��궨��
#define MAX 100
int main(void)
{
	printf("%d\n", MAX);
#undef MAX
	//printf("%d\n", MAX);

	return 0;
}