// 66번 - 인접리스트로 경로찾기 (64번과 동일한 문제)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int n, ch[30], cnt = 0;
vector<int> map[30];

void DFS(int v) {

	if (v == n) cnt++; 
	else {
		for (int i = 0; i < map[v].size(); i++) {
		
			if (ch[map[v][i]] == 0) {//방문안한것
				ch[map[v][i]] = 1;
				DFS(map[v][i]);
				ch[map[v][i]] = 0;
			}
		}
	}
}


int main() {

	//freopen("input.txt", "rt", stdin);

	int m, a, b;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);

		//인접리스트 만듬
		map[a].push_back(b);
	}

	ch[1] = 1;
	DFS(1);
	printf("%d\n", cnt);


}