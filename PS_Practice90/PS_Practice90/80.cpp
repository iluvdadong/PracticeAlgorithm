//80번 - 다익스트라 알고리즘
//출발정점에서 다른 모든 정점으로 가는 최소비용을 알려줌

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<pair<int, int> > map[30];
int ch[30], dist[30];

int main() {

	freopen("input.txt", "rt", stdin);
	
	int n, m, a, b, c, min;
	scanf("%d %d", &n, &m);

	//방향그래프 인접리스트 만들기
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}

	//첫번째 배열 0 나머지 무한대값으로 초기화
	for (int i = 0; i <= n; i++) dist[i] = 999999999;
	dist[1] = 0;

	for (int i = 1; i <= n; i++) {
		min = 0;

		//dist배열중 제일 작은 원소값 찾기
		for (int j = 1; j <= n; j++) {
			if (ch[j] == 0 && dist[j] < dist[min])
				min = j; //j는 정점
		}
		ch[min] = 1; //제일 작은 값은 체크

		for (int j = 0; j < map[min].size(); j++) {
			//min정점에서 갈 수 있는 모든값 탐색
			int v = map[min][j].first;
			//비용
			int cost = map[min][j].second;

			//기존보다 작으면 바꿔줘라
			if (dist[v] > dist[min] + cost) { //1번정점에 min까지 가는 비용 + min에서 v라는 정점까지 가는 비용
				dist[v] = dist[min] + cost;
			}
		}
	}
	
	for (int i = 2; i <= n; i++) {
		if (dist[i] != 999999999) printf("%d : %d\n", i, dist[i]);
		else printf("%d : impossible\n", i);
	}
	return 0;
}



