#include <stdio.h>

int main()
{
	int e[2][5] = { {1, 2, 3, 4, 5},{6,7,8,9,10} };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("�迭 %d\n", e[i][j]);
		}
	}

	for (int i = 2; i < 9; i++)
	{
		printf("**%d��**\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
	}

	//double Sumdata = 1;
	//int n=0;
	//
	//printf("���� �Է��ϼ���:");
	//scanf_s("%d", &n);

	//while (n <= 0)
	//{
	//	printf("���� �Է��ϼ���:");
	//	scanf_s("%d", &n);
	//	printf("���� �Է��ϼ���:");

	//}

	//for (int i = 1; i <= n; i++)
	//{
	//	Sumdata *= (double)n;

	//	printf("%d ��° ��: %.f\n",i,Sumdata);
	//}
	return 0;
}