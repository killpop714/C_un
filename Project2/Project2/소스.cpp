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


//int fac() {
//	int result = 1;
//	int n = 0;
//	printf("�ݺ�Ƚ��:");
//	scanf_s("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		result += i;
//	}
//	return result;
//}
//
//int get_tax(int income)
//{
//	int result = 0;
//
//	if (income > 1000)
//		return result = 1000 * 0.08 + (income - 1000) * 0.1;
//	else
//		return result = income * 0.08;
//
//}


//void factory() {
//	//	long long n, result = 1, i;
//	//	printf("������ �Է��ϼ���.");
//	//	scanf_s("%lld", &n);
//	//	for (i = 1; i <= n; i++) {
//	//		result = result + i;
//	//		printf("��� = %lld\n\n", result);
//	//	}
//	//}
//	//
//	//void sn() {
//	//	double a, result;
//	//	printf("������ �����ÿ�.");
//	//	scanf_s("%lf", &a);
//	//	result = sin(a);
//	//	printf("��� = %lf\n\n", result);
//	//}
//	//
//	//void loglog() {
//	//	double a, result;
//	//	printf("�Ǽ����� �Է��ϼ���: ");
//	//	scanf_s("%lf", &a);
//	//	if (a <= 0.0)
//	//		printf("����\n");
//	//	else {
//	//		result = log10(a);
//	//		printf("��� : %lf\n\n", result);
//	//	}
//	//}
#include <math.h>  
#define STUDENTS 10


//�Ѹ� ����
int main()
{
	int scores[STUDENTS];
	int sum = 0;
	int i, arg;
	for (i = 0; i < STUDENTS; i++) {
		printf("�л��� ��̰� �� ������ �����ϼ���:");
		scanf_s("%d", &scores[i]);
		sum += scores[i];
	}

	arg = sum / STUDENTS;
	printf("���� ���: %d", arg);

	return 0;
}
//void addM(int *m) {
//	int n;
//
//	printf("�󸶸� �Ա��Ͻðڽ��ϱ�:");
//	scanf_s("%d", &n);
//	*m = *m + n;
//}
//
//void subM(int* m) {
//	int n;
//	printf("�󸶸� ����Ͻðڽ��ϱ�:");
//	scanf_s("%d", &n);
//	if (*m - n > 0)
//	{
//		*m = *m - n;
//		printf("%d ��� �Ͽ����ϴ�\n", n);
//	}
//	else
//		printf("�ܾ��� �����Ͽ� ����� �� �����ϴ�\n");
//	
//}
//
//
//int main()
//{
//	int money = 0;
//	while (1) {
//		switch (menu())
//		{
//		case 1:
//			printf("���� �ܾ�: %d\n", money);
//			break;
//		case 2:
//			addM(&money);
//			break;
//		case 3:
//			subM(&money);
//			break;
//		case 4:
//			return 0;
//		default:
//			printf("�߸� ����Ͽ����ϴ�\n.");
//			break;
//		}
//	}
//}