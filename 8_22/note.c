#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//写一个函数判断一年是否为闰年
//打印1000~2000年之间的闰年
//判断闰年的规则
//1.能被4整除,且不能被100整除
//2.能被400整除

/*
int main()
{
	int year = 0;
	int count = 0;
	for (year=1000;year<=2000;year++)
	{
		//判断闰年
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
				count++;
			}
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
*/

/*
//优化
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
*/

/*
 //函数
is_leap_year(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
*/
