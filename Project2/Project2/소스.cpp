#include <stdio.h>

int main()
{
	double Sumdata = 1;
	int n=0;

	while (n <= 0)
	{
		printf("���� �Է��ϼ���:");
		scanf_s("%d", &n);
	}

	for (int i = 1; i <= n; i++)
	{
		Sumdata *= (double)n;

		printf("%d ��° ��: %.f\n",i,Sumdata);
	}
	return 0;
}