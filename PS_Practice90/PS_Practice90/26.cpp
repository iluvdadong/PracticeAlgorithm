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

	printf("1 "); //ù��° �޸��� ����� ������ 1��

	for (int i = 2; i <= N; i++) {
		count = 1;
		for (int j = i-1 ; j >= 1; j--) { //i �պ��� �����ؼ� 1����� ���� �۾����� ����
			if (a[j] >= a[i]) count++;
		}
		printf("%d ", count);
	}
}
