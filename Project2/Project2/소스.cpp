#include <stdio.h>

int main()
{
	double Sumdata = 1;
	int n=0;
	

	while (n <= 0  && (sizeof(n) != sizeof(char))
	{
		printf("값을 입력하세요:");
		scanf_s("%d", &n);
		if (n <= 0)
			printf("다시입력하세요.\n");
	}

	for (int i = 1; i <= n; i++)
	{
		Sumdata *= (double)n;

		printf("%d 번째 값: %.f\n",i,Sumdata);
	}
	return 0;
}