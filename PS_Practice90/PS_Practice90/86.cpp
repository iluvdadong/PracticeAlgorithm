//86번 - 피자 배달 거리 (삼성 SW역량평가 기출문제 DFS)

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair <int, int> > pz;
vector<pair <int, int> > hs;
int ch[20], m, res = 2147000000, dis, sum = 0;

//m: 살아남은 피자집 개
//L은 피자가게 번호 ex. 피자가게 6개면 0번부터~5번까지
//cnt 배열의 인덱스

void DFS(int L, int cnt) {
	
	//피자가게 번호가 피자가게의 개수보다 커지면 그만해라
	if (L > pz.size()) return;
	//cnt: 선택된 피자가게의 개수
	if (cnt == m) {
		sum = 0;
		for (int i = 0; i < hs.size(); i++) {
			int x1 = hs[i].first;
			int y1 = hs[i].second;

			dis = 2147000000; //최소 찾기 위해

			//집과 피자가게들 거리 비교
			for (int j = 0; j < m; j++) {
				int x2 = pz[ch[j]].first;
				int y2 = pz[ch[j]].second;

				//가장작은 피자가게와의 거리를 선택
				dis = min(dis, abs(x1 - x2) + abs(y1 - y2));
			}
			//도시의 피자배달거리
			sum = sum + dis;
		}

		//도시의 피자배달거리 중 가장 작은 것
		if (sum < res) res = sum;
	}
	else {
		//ch에 피자가게 번호가 들어가는 거임
		//살아남은건지 안남은건지 
		ch[cnt] = L;
		DFS(L + 1, cnt + 1); //살아남음
		ch[cnt] = 0;
		DFS(L + 1, cnt); //안살아남음
	}
}

int main() {

	freopen("input.txt", "rt", stdin);
	int n, a;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &a);
			//집과 피자의 좌표 각각 구해서 배열에 넣음
			if (a == 1) hs.push_back(make_pair(i, j));
			else if (a == 2) pz.push_back(make_pair(i, j));
		}
	}

	DFS(0, 0);
	printf("%d\n", res);
	return 0;
}