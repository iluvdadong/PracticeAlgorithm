// The Coder 03 - ��� ����(2���� �迭)
// �Ϸ� - 30�� �ҿ�

#include <stdio.h>
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {

	freopen("input.txt", "rt", stdin);
	int arr[101][101];
	int n, cnt = 0;
	bool flag = 0;

	scanf("%d", &n);

	//���� �����ڸ� ���� ���� ���� �ʱ�ȭ
	for (int i = 0; i <= n+1; i++) {
		for (int j = 0; j <= n+1; j++) {
			arr[i][j] = 100;
		}
	}
	
	//2*2�迭 �� �Է�
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	//���ΰ� ã��
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			
			int x = i;
			int y = j;

			for (int k = 0; k < 4; k++) {
				
				int xx = x+dx[k];
				int yy = y+dy[k];
				
				if (arr[xx][yy] <= arr[x][y]) {
					flag = 1;
					break;
				}
				else {
					flag = 0;
				}
			}
			if (flag == 0) cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}
