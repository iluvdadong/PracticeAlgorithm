#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int main() {

	int N, count;
	
	scanf("%d", &N);
	vector<int> a(N+1);

	for (int i = 1; i <= N; i++)
		scanf("%d", &a[i]);

	printf("1 "); //첫번째 달리는 사람은 무조건 1등

	for (int i = 2; i <= N; i++) {
		count = 1;
		for (int j = i-1 ; j >= 1; j--) { //i 앞부터 시작해서 1등까지 숫자 작아지며 돌기
			if (a[j] >= a[i]) count++;
		}
		printf("%d ", count);
	}
}
