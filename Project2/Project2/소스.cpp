#include <stdio.h>

int main()
{
	int Sumdata = 1;
	int n=0;

	while (n <= 0)
	{
		scanf_s("값을 입력하세요:%d", &n);
		//if (n <= 0)
			//printf("값을 잘못 입력하였습니다.");
	}

	for (int i = 1; i <= n; i++)
	{
		Sumdata *= n;
	}
	return 0;
}