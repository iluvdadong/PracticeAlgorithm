// BJ 2133 타일채우기
// DP

#include <iostream>
using namespace std;

int arr[31];

int dp(int x) {

	if (x == 0) return 1;
	if (x == 1) return 0;
	if (x == 2) return 3;
	if (arr[x] != 0) return arr[x];

	int result = 3 * dp(x - 2); //원래 점화식

	// 4부터~짝수마다 원래 점화식에서 + 2 씩 추가되어서 나옴
	for (int i = 3; i <= x; i++) {

		if (i % 2 == 0) {
			result += 2 * dp(x - i);
		}
	}
	return arr[x] = result;

}
	

	

int main() {

	int N;
	cin >> N;
	cout << dp(N)
}
