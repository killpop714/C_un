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
//	//���� �Լ�
//	//reverse(vec.begin(), vec.end());
//
//
//	//�Լ��� �Ű������� ���� �Լ�
//	//int num_odds = count_if(vec.begin(), vec.end(), is_odd);
//
//
//	//�Լ� �Ű������� ���� �� �ִ� ����� ���� �Ű����� ��ȣ���� �ٸ� �Լ��� �����͸� ���� �� �ִ�.
//	int a =data(0, is_odd);
//
//	//for  ��๮���� �̷��� ������ vec�� �����Ͱ� num���� �Ѿ��(�ٸ� Bigin�� endó���� �Ǿ� �־�� �ȴ�.)
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