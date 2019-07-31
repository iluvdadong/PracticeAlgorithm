// 56번 - 재귀함수 (기본)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

//반환하는 건 아니고 출력함수라서 void
void recur(int x) {

	if (x == 0) return; //종료지점
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