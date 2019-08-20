// 73번 - 최대힙(priority_queue : 우선순위 큐)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
	
	freopen("input.txt", "rt", stdin);
	int a;	//값 읽기
	priority_queue<int> pQ;

	while (true) {
		scanf("%d", &a);
		if (a == -1) break;
		if (a == 0) {
			if (pQ.empty()) printf("-1\n");
			else {
				printf("%d\n", pQ.top());
				pQ.pop();
			}
		}
		else {
			pQ.push(a);
		}
	}
}