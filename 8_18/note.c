#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//���庯��
int get_max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	//��ʼ������
	int a = 0;
	int b = 0;
	//������������
	scanf("%d %d", &a,&b);
	//���ú���
	int max = get_max(a, b);
	//��ӡ���
	printf("%d", max);
	return 0;
}
*/

/*
//�����������α�����ֵ
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
	printf("����ǰ��a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}
//ע��a,bΪʵ��x,yΪ�β� �β���ʵ�ε�һ�ݿ�����
//���βε��޸Ĳ���Ӧ����ʵ����
//��ʹ�ô�ַ����

*/

/*
//�ж�100~200֮�������
//������ֻ�ܱ�1����������������
int main()
{
	int count = 0;
	int i = 0;
	//����100-200֮�����
	for (i = 100; i <= 200; i++)
	{
		//�ж��Ƿ�Ϊ����
		//��2~i-1����ȥ��
		//����Ǿʹ�ӡ����

		//����2~i-1֮�����
		int j = 0;
		int flag = 1;//1��ʾ������
		for (j=2;j<i-1;j++)
		{
			//�ų�����
			if (i%j==0)
			{
				flag = 0;
				break;
			}
		}
		//��������
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
//�Ż�
//sqrt()��Ҫ������ļ�math.h
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	//ż�������������������Դ�101��ʼ��i+=2������������
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		int flag = 1;
		//sqrt()����
		//��ʾ��ƽ��
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
//�������÷�ʽ
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