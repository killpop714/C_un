//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//bool is_odd(int i) {
//	return i % 2 == 2;
//}
//
//int data(int b, bool c) {
//	int result;
//	c = b;
//
//	return c;
//}
//
//int main()
//{
//
//	vector<int> vec = { 3,4,5,6,7,8};
//
//	//정렬 함수
//	//reverse(vec.begin(), vec.end());
//
//
//	//함수의 매개변수로 들어가는 함수
//	//int num_odds = count_if(vec.begin(), vec.end(), is_odd);
//
//
//	//함수 매개변수에 넣을 수 있는 방식을 따로 매개변수 괄호없이 다른 함수로 데이터를 넣을 수 있다.
//	int a =data(0, is_odd);
//
//	//for  축약문으로 이러한 형식은 vec의 데이터가 num으로 넘어갔다(다만 Bigin과 end처리가 되어 있어야 된다.)
//	//for (int num : vec) {
//	//	cout << num << "";
//	//}
//
//	cout << a << endl;
//	return 0;
//}
#include <iostream>


using namespace std;

template<typename T1, typename T2>
struct Tree_node
{
	T1 key;
	T2 value;
	char color;

	Tree_node<T1, T2>* left;
	Tree_node<T1, T2>* right;
	Tree_node<T1, T2>* parent;

	Tree_node() { color = 'R';left=nullptr, right = nullptr
	, parent = nullptr
	}
	Tree_node(T1 k, T2 v, char c, Tree_node* l, Tree_node* r, Tree_node* p) { key = k; value = v; color = c; left = l; right = r; parent = p; }
	~Tree_node() {}
};

int main()
{

	
	return 0;
}