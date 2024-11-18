#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void main()
{
	vector<int> vec = { 1,2,3,4,5 };
	reverse(vec.begin, vec.end);
	for (int num : vec) {
		cout << num << "";
	}
}
