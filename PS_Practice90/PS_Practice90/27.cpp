// 27�� - N!�� ǥ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N, temp;
	scanf("%d", &N);

	vector<int> check(N+1);

	for (int i = 2; i <= N; i++) {
		temp = i; //i����X temp�� �־����
		int j = 2;
		
		while (1) {
			if (temp % j == 0) {
				temp = temp / j;
				check[j]++;
			}
			else j++;
			if (temp == 1) break;
		}
	}
	printf("%d! = ", N);
	for (int i = 1; i <= N; i++)
		if (check[i] != 0)
			printf("%d ", check[i]);
	return 0;
}