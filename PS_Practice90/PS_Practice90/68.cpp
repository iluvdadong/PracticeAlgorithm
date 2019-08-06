// 68번 - 최소비용 DFS 가중치 방향 그래프 (인접리스트)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n, a, b, c, ch[30], cost = 999999999;
vector<pair<int, int> > map[30];

void DFS(int v, int sum) {

	if (v == n) {
		if (sum < cost)
			cost = sum;
	}
	else {
		for (int i = 0; i < map[v].size(); i++) {
			if (ch[map[v][i].first] == 0) { //방문안한 것 
										//map[v][i].first는 정점임
				ch[map[v][i].first] = 1;
				DFS(map[v][i].first, sum + map[v][i].second);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main() {

	int m;
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c)); //c는?
	}

	ch[1] = 1;
	DFS(1, 0);
	printf("%d", cost);

	return 0;

}