//45번 - 공주구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	//bp : break point는 n-1만큼 왕자 아웃시키기 위한 수
	int n, k, pos=0, bp=0, cnt=0;
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);

	while (1) {
		pos++;
		if (pos > n) pos = 1;
		if (prince[pos] == 0) {
			cnt++;
			if (cnt == k) {
				prince[pos] = 1; //out
				cnt = 0;
				bp++; //한명아웃
			}
		}
		if (bp == n - 1) break;
	}

	for (int i = 1; i <= n; i++) {
		if (prince[i] == 0) printf("%d", i);
	}
	return 0;
}