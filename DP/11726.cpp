// BJ - 11726 2*n Ÿ�ϸ�
// ���̳��� ���α׷���

#include <iostream>
using namespace std;

int arr[1001];

int dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (arr[x] != 0) return arr[x];
	
	return arr[x] = (dp(x - 1) + dp(x - 2)) % 10007; 
	//%10007�� �����÷ο� ����
}

int main() {
	
	int N;
	cin >> N;
	cout << dp(N);
}