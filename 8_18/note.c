#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//定义函数
int get_max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	//初始化变量
	int a = 0;
	int b = 0;
	//输入两个数字
	scanf("%d %d", &a,&b);
	//调用函数
	int max = get_max(a, b);
	//打印结果
	printf("%d", max);
	return 0;
}
*/

/*
//交换两个整形变量的值
void swap(int*px,int*py)
{
	int z = 0;
	z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=a
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前，a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后，a=%d b=%d\n", a, b);
	return 0;
}
//注意a,b为实参x,y为形参 形参是实参的一份拷贝，
//对形参的修改不能应用于实参上
//需使用传址调用

*/

/*
//判断100~200之间的素数
//素数：只能被1和他本身整除的数
int main()
{
	int count = 0;
	int i = 0;
	//生成100-200之间的数
	for (i = 100; i <= 200; i++)
	{
		//判断是否为素数
		//用2~i-1的数去除
		//如果是就打印出来

		//生成2~i-1之间的数
		int j = 0;
		int flag = 1;//1表示是素数
		for (j=2;j<i-1;j++)
		{
			//排除素数
			if (i%j==0)
			{
				flag = 0;
				break;
			}
		}
		//挑出素数
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	return 0;
	printf("\ncount = %d",count);
}
*/

/*
//优化
//sqrt()需要引入库文件math.h
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	//偶数不可能是素数，所以从101开始，i+=2生成奇数即可
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		int flag = 1;
		//sqrt()函数
		//表示开平方
		for (j=2;j<=sqrt(i);j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag==1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
*/

/*

*/
//函数调用方式
#include<math.h>
int is_prime(int n)
{
	int j = 0;
		for(j=2; j<=sqrt(n); j++)
		{
			if (n % j == 0)
			{
				return 0;
			}
		}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d",count);
	return 0;
}