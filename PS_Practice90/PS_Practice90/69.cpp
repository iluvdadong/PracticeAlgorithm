// 69번 - 넓이우선탐색 BFS (큐 자료구조 구현)
// 무방향 그래프리스트

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int Q[100], front = -1, back = -1, ch[10];
vector<int> map[10];

int main() {

	int a, b, x;
	
	for (int i = 1; i <= 6; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b); //인접리스트 만듬
		map[b].push_back(a); //무방향이라 이 코드도 추가
	}

	//큐 운영
	Q[++back] = 1; // 큐에 1번 루트 노드 넣기
	ch[1] = 1; // check 배열에 1 넣기
	
	while (front < back) { //같아지는 순간 queue는 비어있다는 것
		x = Q[++front]; //빼는거
		printf("%d", x); //빼고 출력

		for (int i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				Q[++back] = map[x][i];
			}
		}
	}
	return 0;
}