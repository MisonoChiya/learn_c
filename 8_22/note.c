#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//дһ�������ж�һ���Ƿ�Ϊ����
//��ӡ1000~2000��֮�������
//�ж�����Ĺ���
//1.�ܱ�4����,�Ҳ��ܱ�100����
//2.�ܱ�400����

/*
int main()
{
	int year = 0;
	int count = 0;
	for (year=1000;year<=2000;year++)
	{
		//�ж�����
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
//�Ż�
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
 //����
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
