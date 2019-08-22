//79번 원더랜드 - 우선순위큐 활용

//78번 - 원더랜드 Kruskal MST 알고리즘 : Union&Find 활용

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int ch[30];

struct Edge {

	int e; //노드
	int val; //간선 가중치값
	
	//생성자로 입력한 (노드, 간선값) 대입
	Edge(int a, int b) {
		e = a;
		val = b;
	}
	
	bool operator<(const Edge &b)const {
		return val > b.val; //최소힙으로 리턴됨
							//부등호 방향을 < 로 하면 최대힙으로 리턴됨
	}
};

int main() {

	freopen("input.txt", "rt", stdin);
	
	priority_queue<Edge> Q;

	//가중치 인전리스트 때문에 만듬
	vector<pair<int, int> > map[30];

	int n, m, a, b, c, res = 0;

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		
		//무방향 가중치 인접리스트 a->b, b->a 가능
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}

	//알고리즘 시작
	Q.push(Edge(1, 0)); //임의의 출발 정점

	while (!Q.empty()) {
	
		//2번째 바퀴부터 큐에서 가장 작은 값 참조
		Edge tmp = Q.top();
		Q.pop(); //최초 (1, 0) 날라감

		int v = tmp.e;
		int cost = tmp.val;
		
		//이미 지나간 원소이냐 아니냐 확인
		if (ch[v] == 0) {
			res += cost;
			ch[v] = 1;
			for (int i = 0; i < map[v].size(); i++) {
				Q.push(Edge(map[v][i].first, map[v][i].second));
				//first : 정점번호 secnd : 간선값
				//Edge는 생성자고 이 값을 push 해준다.
			}
		}
	}
	printf("%d\n", res);
	return 0;
}
