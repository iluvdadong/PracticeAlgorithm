// 54번 - 올바른 괄호(stack) STL 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {

	char temp, count = 0;
	int flag = 1; //신호변수 (()))()
	stack<char> s;

	char a[50];
	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') s.push(a[i]);
		else {
			if (s.empty()) {
				printf("NO\n");
				flag = 0;
				break;
			}
			else {
				s.pop();
			}
		}
	}
	if (s.empty() && flag == 1) printf("YES\n");
	else if(!s.empty() && flag == 1)printf("NO\n");

	return 0;
}