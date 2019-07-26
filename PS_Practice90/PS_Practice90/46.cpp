//46번 - 멀티태스킹(카카오 먹방 문제 변형)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n, k, pos = 0, sec = 0, total=0;
	scanf("%d", &n);
	vector<int> a(n+1);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}

	scanf("%d", &k);

	//시작
	if (k >= total) {
		printf("-1\n");
		return 0;
	}

	while (1) {
		//A
		pos++;

		if (pos > n)
			pos = 1;

		if (a[pos] == 0) continue;
		//continue시 아래 작업은 안하고 반복문으로 간다 A지점

		a[pos]--;
		sec++;
		if (sec == k) break;
	}
	
	while (1) {
		pos++;
		if (pos > n) pos = 1;
		if (a[pos] != 0) break;
	}

	printf("%d", pos);
}