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

//int main()
//{
//	//최대 50까지
//	int n = 0;
//	while (1)
//	{
//		printf("값을 입력하세요.");
//		scanf_s("%d", &n);
//
//		if (n < 0)
//			return 0;
//
//		else if (n > 50)
//		{
//			printf("값이 너무 큽니다.\n");
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
//	printf("반복횟수:");
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
//	//	printf("정수를 입력하세요.");
//	//	scanf_s("%lld", &n);
//	//	for (i = 1; i <= n; i++) {
//	//		result = result + i;
//	//		printf("결과 = %lld\n\n", result);
//	//	}
//	//}
//	//
//	//void sn() {
//	//	double a, result;
//	//	printf("각도를 적으시오.");
//	//	scanf_s("%lf", &a);
//	//	result = sin(a);
//	//	printf("결과 = %lf\n\n", result);
//	//}
//	//
//	//void loglog() {
//	//	double a, result;
//	//	printf("실수값을 입력하세요: ");
//	//	scanf_s("%lf", &a);
//	//	if (a <= 0.0)
//	//		printf("오류\n");
//	//	else {
//	//		result = log10(a);
//	//		printf("결과 : %lf\n\n", result);
//	//	}
//	//}
#include <math.h>  
#define STUDENTS 10


//넘모 쉽다
int main()
{
	int scores[STUDENTS];
	int sum = 0;
	int i, arg;
	for (i = 0; i < STUDENTS; i++) {
		printf("학생을 즐겁게 할 점수를 지정하세요:");
		scanf_s("%d", &scores[i]);
		sum += scores[i];
	}

	arg = sum / STUDENTS;
	printf("성적 평균: %d", arg);

	return 0;
}
//void addM(int *m) {
//	int n;
//
//	printf("얼마를 입금하시겠습니까:");
//	scanf_s("%d", &n);
//	*m = *m + n;
//}
//
//void subM(int* m) {
//	int n;
//	printf("얼마를 출금하시겠습니까:");
//	scanf_s("%d", &n);
//	if (*m - n > 0)
//	{
//		*m = *m - n;
//		printf("%d 출금 하였습니다\n", n);
//	}
//	else
//		printf("잔액이 부족하여 출금할 수 없습니다\n");
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
//			printf("현재 잔액: %d\n", money);
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
//			printf("잘못 출력하였습니다\n.");
//			break;
//		}
//	}
//}