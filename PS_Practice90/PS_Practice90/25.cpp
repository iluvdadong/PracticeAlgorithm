// 25번 - 석차구하기_bruteforce

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N; 
	scanf("%d", &N);
	vector<int> a(N+1);
	vector<int> b(N+1, 1);

	for (int i = 1; i <= N; i++)
		scanf("%d", &a[i]);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (a[i] < a[j]) {
				b[i]++;
			}
		}
	}

	for (int i = 1; i <= N; i++)
		printf("%d ", b[i]);

}