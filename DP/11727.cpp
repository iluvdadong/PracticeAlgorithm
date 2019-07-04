// BJ - 11727 타일 문제 2 : DP

#include <iostream>
using namespace std;

int arr[1001];

int dp(int x) {

	if (x == 1) return 1;
	if (x == 2) return 3;
	if (arr[x] != 0) return arr[x];

	return arr[x] = (dp(x - 1) + 2 * dp(x - 2)) % 10007;
}


int main() {

	int n;
	cin >> n;

	cout << dp(n);

}