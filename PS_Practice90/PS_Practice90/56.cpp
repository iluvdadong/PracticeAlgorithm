// 56�� - ����Լ� (�⺻)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

//��ȯ�ϴ� �� �ƴϰ� ����Լ��� void
void recur(int x) {

	if (x == 0) return; //��������
	else {	
		recur(x - 1);
		printf("%d ", x);
	}
}

int main() {

	int n;
	scanf("%d", &n);
	recur(n);

}