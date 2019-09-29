//78번 - 원더랜드 Kruskal MST 알고리즘 : Union&Find 활용

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int unf[1001];
int gas;

//간선정보 구조체
struct Edge {

	int v1;
	int v2;
	int val;

	//생성자
	Edge(int a, int b, int c) {
		v1 = a;
		v2 = b;
		val = c;
	}
	//연산자오버로딩 val 기준 오름차순 정렬
	bool operator<(Edge& b) {
		return val < b.val;
	}
};

int Find(int v) {
	//배열의 번호와 안의 값이 일치하는지 보기(연결됨?)
	if (v == unf[v]) return v;
	else {
		return unf[v] = Find(unf[v]); //재귀
	}
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	//연결안되어 있으면 연결시켜줌
	if (a != b) unf[a] = b;
}

int main() {

	freopen("input.txt", "rt", stdin);
	int v, e, a, b, c, cnt = 0, res = 0;

	//정보가 많을 때는 구조체를 Vector로 넣기
	vector<Edge> Ed;

	scanf("%d %d %d", &v, &gas, &e);

	//모든 정점을 자기 단독의 집합이라 초기화
	for (int i = 1; i <= v; i++) {
		unf[i] = i;
	}

	for (int i = 1; i <= e; i++) {
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back((Edge(a, b, c)));
		//생성자 호출을 통해 edge형으로 vector에 차례대로 삽입
	}

	//가중치 값에 의해서 (bool operator) 오름차순 정렬
	sort(Ed.begin(), Ed.end());

	for (int i = 0; i < e; i++) {
		//간선을 선택할거야? find 해봄
		int fa = Find(Ed[i].v1);
		int fb = Find(Ed[i].v2);

		//서로 다른 집합이면 연결(즉 연결안된 상태면)
		if (fa != fb) {
			res += Ed[i].val;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}
	printf("%d\n", res);
	return 0;
}