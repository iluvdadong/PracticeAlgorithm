// BJ 3052
#include <iostream>
#include <set>
using namespace std;

int main(void) {

	int array[10];
	int count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}

	set<int> remainder;//set �ߺ����X

	for (int i = 0; i < 10; i++) {
		remainder.insert(array[i] % 42);
	}

	//���� ���� �� �μ�
	cout << remainder.size();
	return 0;
}