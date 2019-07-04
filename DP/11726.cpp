// BJ - 11726 2*n 타일링
// 다이나믹 프로그래밍

#include <iostream>
using namespace std;

int arr[1001];

int dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (arr[x] != 0) return arr[x];
	
	return arr[x] = (dp(x - 1) + dp(x - 2)) % 10007; 
	//%10007은 오버플로우 방지
}

int main() {
	
	int N;
	cin >> N;
	cout << dp(N);
}