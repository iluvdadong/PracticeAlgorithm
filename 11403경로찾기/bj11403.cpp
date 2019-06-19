// 백준 11403 - 경로찾기 (인접행렬)
// DFS, BFS, 플로이드 와샬 알고리즘 => DFS 이용함
// DFS : 한 노드르 기준으로 그 노드에 연결된 노드를 탐색함
// 방문했다는 뜻은 기준 노드와 방문 노드간이 연결되었다는 뜻
// 각 노드가 다른 노드와의 연결관계는 DFS를 이용하면 쉽게 찾을 수 있음
// 무방향 그래프 --> 양방향 모두 간선처리 필요 / 방향 그래프 --> 방향대로만 간선처리

#include <iostream>
#include <vector>
#include <array>
using namespace std;


//N행 입력받고
//인접행렬 N*N 인자 입력(0 or 1)
void solve() {

	//N행 입력받음
	int n;
	cin >> n;

	int** p = nullptr;
	p = new int* [n + 1];
	for (int i = 0; i < n + 1; i++) {
		p[i + 1] = new int[n + 1];
	}

	int* p2;
	p2 = new int[n + 1];

	int** path = nullptr;
	path = new int* [n + 1];
	for (int i = 0; i < n + 1; i++) {
		path[i + 1] = new int[n + 1];
	}

	for (int j = 1; j <= n; j++) {

		for (int k = 1; k <= n; k++) {
			int jk;
			cin >> jk;
			p[j][k] = jk;
		}
	}

	for (int i = 1; i <= n; i++) {
		
		dfs(p, p2, i);

		for (int j = 1; j <= n; j++) {
			path[i][j] = p2[j];
		}
		p2 = { 0, };
	}
}

	void dfs(int a, int c, int v) {
	
		int n = sizeof(a) - 1;

		for (int i = 1; i <= n; i++) {
		
			if (a[v][i] == 1 && c[i] == 0) {
				c[i] = 1;
				dfs(a, c, v);
			}
		}
	
	}

int main() {



}