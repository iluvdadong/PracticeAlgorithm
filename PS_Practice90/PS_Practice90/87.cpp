// 87본 섬나라 아일랜드 BFS

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n, map[30][30], cnt = 0;
//시계방향 회전으로
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0 ,-1 };

//Q에다가 넣기 위해 Loc데이터형 만듬
struct Loc {
	int x;
	int y;
	Loc(int a, int b) {
		x = a;
		y = b;
	}
};

//Loc데이터 타입의 큐를 만듬
queue<Loc> Q;

int main() {

	freopen("input.txt", "rt", stdin);

	int n;
	scanf("%d", &n);

	//2중 포문 돌면서 맵에 저장
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	//2중 포문 돌면서 일 시작
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			//돌다가 1을 만나면
			if (map[i][j] == 1) {
				//큐에 그 좌표를 푸시
				Q.push(Loc(i, j));
				//그 좌표는 중복제거하게 0으로 바꿈
				map[i][j] = 0;

				while (!Q.empty()) {

					//Loc형 tmp변수에 Q의 탑을 받음
					Loc tmp = Q.front();
					//받고 pop시킴
					Q.pop();

					//8방향 탐색하기
					for (int i = 0; i < 8; i++) {

						//Q에 선택된 x좌표 y좌표의 8방향 봄
						int xx = tmp.x + dx[i];
						int yy = tmp.y + dy[i];

						//1이더라
						if (map[xx][yy] == 1) {
							//해당좌표를 넣어줌
							Q.push(Loc(xx, yy));
							//이미 방문한 곳은 0으로 바꿔줌
							map[xx][yy] = 0;
						}
					}
				}
				//섬 1개를 다 탐색하면 섬개수++
				cnt++;
			}
		}
	}

	printf("%d\n", cnt);
	return 0;
}