// ���� 11403 - ���ã�� (�������)
// DFS, BFS, �÷��̵� �ͼ� �˰��� => DFS �̿���
// DFS : �� ��帣 �������� �� ��忡 ����� ��带 Ž����
// �湮�ߴٴ� ���� ���� ���� �湮 ��尣�� ����Ǿ��ٴ� ��
// �� ��尡 �ٸ� ������ �������� DFS�� �̿��ϸ� ���� ã�� �� ����
// ������ �׷��� --> ����� ��� ����ó�� �ʿ� / ���� �׷��� --> �����θ� ����ó��

#include <iostream>
#include <vector>
#include <array>
using namespace std;


//N�� �Է¹ް�
//������� N*N ���� �Է�(0 or 1)
void solve() {

	//N�� �Է¹���
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