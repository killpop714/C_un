#include <stdio.h>
#include <iostream>
//int main()
//{
//	int e[3][5] = { {1, 2, 3, 4, 5},{6,7,8,9,10},{11,12,13,14,15} };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("�迭 %d\n", e[i][j]);
//		}
//	}
//
//	for (int i = 2; i < 9; i++)
//	{
//		printf("**%d��**\n", i);
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %d\n",i,j,i*j);
//		}
//	}
//
//
//	//�ŵ����� ����
//	//double Sumdata = 1;
//	//int n=0;
//	//
//	//printf("���� �Է��ϼ���:");
//	//scanf_s("%d", &n);
//
//	//while (n <= 0)
//	//{
//	//	printf("���� �Է��ϼ���:");
//	//	scanf_s("%d", &n);
//	//	printf("���� �Է��ϼ���:");
//
//	//}
//
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	Sumdata *= (double)n;
//
//	//	printf("%d ��° ��: %.f\n",i,Sumdata);
//	//}
//	return 0;
//}

//int main()
//{
//	//�ִ� 50����
//	int n = 0;
//	while (1)
//	{
//		printf("���� �Է��ϼ���.");
//		scanf_s("%d", &n);
//
//		if (n < 0)
//			return 0;
//
//		else if (n > 50)
//		{
//			printf("���� �ʹ� Ů�ϴ�.\n");
//			continue;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//		
//	}
//
//	return 0;
//}


int fac() {
	int result = 1;
	int n = 0;
	printf("�ݺ�Ƚ��:");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		result += i;
	}
	return result;
}

int get_tax(int income)
{
	int result = 0;

	if (income > 1000)
		return result = 1000 * 0.08 + (income - 1000) * 0.1;
	else
		return result = income * 0.08;

}

int main()
{
	int income = 0;
	printf("�ҵ��� �Է��ϼ���(����):");
	scanf_s("%d", &income);
	get_tax(income);
	printf("�ҵ漼��:%d(����)", get_tax(income));
}