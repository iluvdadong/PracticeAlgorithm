// 87�� ������ ���Ϸ��� BFS

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n, map[30][30], cnt = 0;
//�ð���� ȸ������
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0 ,-1 };

//Q���ٰ� �ֱ� ���� Loc�������� ����
struct Loc {
	int x;
	int y;
	Loc(int a, int b) {
		x = a;
		y = b;
	}
};

//Loc������ Ÿ���� ť�� ����
queue<Loc> Q;

int main() {

	freopen("input.txt", "rt", stdin);

	int n;
	scanf("%d", &n);

	//2�� ���� ���鼭 �ʿ� ����
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	//2�� ���� ���鼭 �� ����
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			//���ٰ� 1�� ������
			if (map[i][j] == 1) {
				//ť�� �� ��ǥ�� Ǫ��
				Q.push(Loc(i, j));
				//�� ��ǥ�� �ߺ������ϰ� 0���� �ٲ�
				map[i][j] = 0;

				while (!Q.empty()) {

					//Loc�� tmp������ Q�� ž�� ����
					Loc tmp = Q.front();
					//�ް� pop��Ŵ
					Q.pop();

					//8���� Ž���ϱ�
					for (int i = 0; i < 8; i++) {

						//Q�� ���õ� x��ǥ y��ǥ�� 8���� ��
						int xx = tmp.x + dx[i];
						int yy = tmp.y + dy[i];

						//1�̴���
						if (map[xx][yy] == 1) {
							//�ش���ǥ�� �־���
							Q.push(Loc(xx, yy));
							//�̹� �湮�� ���� 0���� �ٲ���
							map[xx][yy] = 0;
						}
					}
				}
				//�� 1���� �� Ž���ϸ� ������++
				cnt++;
			}
		}
	}

	printf("%d\n", cnt);
	return 0;
}