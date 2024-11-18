#include <stdio.h>

//int main()
//{
//	int e[3][5] = { {1, 2, 3, 4, 5},{6,7,8,9,10},{11,12,13,14,15} };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("배열 %d\n", e[i][j]);
//		}
//	}
//
//	for (int i = 2; i < 9; i++)
//	{
//		printf("**%d단**\n", i);
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %d\n",i,j,i*j);
//		}
//	}
//
//
//	//거듭제곱 형식
//	//double Sumdata = 1;
//	//int n=0;
//	//
//	//printf("값을 입력하세요:");
//	//scanf_s("%d", &n);
//
//	//while (n <= 0)
//	//{
//	//	printf("값을 입력하세요:");
//	//	scanf_s("%d", &n);
//	//	printf("값을 입력하세요:");
//
//	//}
//
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	Sumdata *= (double)n;
//
//	//	printf("%d 번째 값: %.f\n",i,Sumdata);
//	//}
//	return 0;
//}

int main()
{
	//최대 50까지
	int n = 0;
	while (1)
	{
		printf("값을 입력하세요.");
		scanf_s("%d", &n);

		if (n < 0)
			return 0;

		else if (n > 50)
		{
			printf("값이 너무 큽니다.\n");
			continue;
		}
		for (int i = 0; i < n; i++)
		{
			printf("*");
		}
		printf("\n");

		
	}

	return 0;
}