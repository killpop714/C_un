#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec = { 3,4,5,6,7 };

	//���� �Լ�
	reverse(vec.begin(), vec.end());

	//for  ��๮���� �̷��� ������ vec�� �����Ͱ� num���� �Ѿ��.
	for (int num : vec) {
		cout << num << "";
	}
	return 0;
}
