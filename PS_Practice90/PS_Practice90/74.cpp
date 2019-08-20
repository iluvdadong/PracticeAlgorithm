//74번 - 최소힙 우선순위큐

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
	
	freopen("input.txt", "rt", stdin);
	int a;
	priority_queue<int> pQ;

	while (true) {

		scanf("%d", &a);
		if (a == -1) break;
		if (a == 0) {
			if (pQ.empty()) printf("-1\n");
			else {
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
		}
		else {
			//push할때 부호를 바꿔서 넣으면 최소힙됨
			pQ.push(-a);
		}
	}
}