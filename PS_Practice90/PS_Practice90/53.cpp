//53번 - K진수 출력 (스택이용)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stack[100], top = -1;

void push(int x) {
	stack[++top] = x;
}

int pop() {
	return stack[top--];
}

int main() {

	int n, k;

	//16진수를 위해, 15면 str의15인 F가 찍히는 것이다.
	char str[20] = "0123423789ABCDEF";

	scanf("%d %d", &n, &k);

	while (n>0) {
		push(n % k);
		n = n / k;
	}

	//pop해서 top이 -1될 때까지 즉, 스택에 있는 자료를 모두 꺼낼 때까지 반복
	while (top != -1) {
		//str은 char배열이기 때문에 c로 찍어줘야 함
		printf("%c", str[pop()]);
	}
	
	return 0;
}