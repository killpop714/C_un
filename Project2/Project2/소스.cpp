#include <stdio.h>

int main()
{
	long Sumdata = 1;
	int n=0;

	while (n <= 0)
	{
		printf("���� �Է��ϼ���:");
		scanf_s("%d", &n);
	}

	for (int i = 1; i <= n; i++)
	{
		Sumdata *= (long)i;

		printf("%d ��° ��: %ld\n",i,Sumdata);
	}
	return 0;
}