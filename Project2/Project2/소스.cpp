#include <stdio.h>

int main()
{
	int Sumdata = 1;
	int n=0;

	while (n <= 0)
	{
		scanf_s("���� �Է��ϼ���:%d", &n);
		//if (n <= 0)
			//printf("���� �߸� �Է��Ͽ����ϴ�.");
	}

	for (int i = 1; i <= n; i++)
	{
		Sumdata *= n;
	}
	return 0;
}