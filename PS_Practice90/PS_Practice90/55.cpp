// 55�� - ��������(Stack ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	stack<int> s;
	int n, t, j=1;

	scanf("%d", &n);

	vector<char> str;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &t);
		s.push(t);
		str.push_back('P');

		while (1) {
			if (s.empty()) //������ ���������
				break;
			if (j == s.top()) {
				s.pop();
				str.push_back('O');
				j++;
			}
			else break;
		}
	}

	if (!s.empty()) printf("impossible\n");
	else {
		for (int i = 0; i < str.size(); i++) //10�� �־����� size�� 10�� (���� 10��)
			printf("%c", str[i]);
	}
	return 0;

}