// 37번 - LRU 카카오 캐시 문제 변형

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int s, n, a, pos;

	scanf("%d %d", &s, &n);
	vector<int> c(s); //캐시공간

	for (int i = 0; i < n; i++) {
		scanf("%d", &a); //값 받기
		pos = -1; //hit or miss 확인용
		for (int j = 0; j < s; j++) {
			if (a == c[j])//hit
				pos = j;
		}
		if (pos == -1) { //miss
			for (int j = s - 1; j >= 1; j--)
				c[j] = c[j - 1];
		}
		else { //hit
			for (int j = pos; j >= 1; j--) 
				c[j] = c[j - 1];
		}
		c[0] = a;
	}
	for (int i = 0; i < s; i++)
		printf("%d ", c[i]);

	return 0;
}
