// 22�� - �µ��� �ִ밪 (���ѽð� 1��)
// 1���� �迭 ���� ��
// �ð����⵵ n���� Ǫ�� �� - ���̳��� ���α׷���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int main() {

	int N, K, max, sum = 0;

	scanf("%d %d", &N, &K);

	vector<int> A(N); //1���� �迭 �������� ���� //�⺻���� �迭 �� 0���� �ʱ�ȭ������

	for (int i = 0;i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < K; i++) {
		sum += A[i];
	}

	max = sum;
	for (int i = K; i < N; i++) {
		sum = sum + (A[i] - A[i - K]); //���̳������α׷���
		if (sum > max) max = sum;
	}
	
	printf("%d", max);
}
