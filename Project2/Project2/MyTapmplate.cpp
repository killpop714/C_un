#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec = { 3,4,5,6,7 };

	//정렬 함수
	reverse(vec.begin(), vec.end());

	//for  축약문으로 이러한 형식은 vec의 데이터가 num으로 넘어갔다.
	for (int num : vec) {
		cout << num << "";
	}
	return 0;
}
