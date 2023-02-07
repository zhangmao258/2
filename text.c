#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//
//	return 0;
//}




//int a(int x)
//{
//	int i = 0;
//	int c = 1;
//	if (x >= 1)
//	{
//		for (i = 1; i <= x; i++)
//		{
//			c *= i;
//		}
//		int b= a(x-1);
//		c += b;
//	}
//	
//	
//	return c;
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int arr=a(x);
//	printf("%d", arr-1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//


//int a(int n,int c)
//{
//	int i = 0;
//	int arr = 0;
//	if (n >= 1)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			c *= i;
//		}
//		int s=a(n - 1, 1);
//		arr = c + s;
//	}
//
//	return arr;
//}
//
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	int b = a(n,1);
//	printf("%d", b);
//	return 0;
//}



#include <stdio.h>
int main()
{
    int i = 0;
    int arr[10] = { 0 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hehe\n");
    }
    return 0;
}





















































