#include <iostream>
#include <vector>

using namespace std;

int number = 9; //노드 수
int visit[9];
vector<int> a[10];

void dfs(int start) {

	if (visit[start]) {
		return; //방문한 경우 바로 빠져나옴
	}

	visit[start] = true; //방문
	cout << start << " ";

	for (int i = 0; i < a[start].size(); i++) {
		//인접 노드 방문
		int x = a[start][i];
		dfs(x);
	}
}

int main(void) {

	//1과 2연결
	a[1].push_back(2);
	a[2].push_back(1);

	//1과 3연결
	a[1].push_back(3);
	a[3].push_back(1);

	//2와 4연결
	a[2].push_back(4);
	a[4].push_back(2);

	//4와 8연결
	a[4].push_back(8);
	a[8].push_back(4);

	//2와 5연결
	a[2].push_back(5);
	a[5].push_back(2);

	//5와 9연결
	a[5].push_back(9);
	a[9].push_back(5);

	//3과 6연결
	a[3].push_back(6);
	a[6].push_back(3);

	//3과 7연결
	a[3].push_back(7);
	a[7].push_back(3);

	dfs(1); //1에서 시작

	return 0;

}