// The Coder 05 - �ӽù��� ���ϱ�(���� �ù�)
// ���� - 1�ð� 30�� ����
// ���� �� �絵�� ����

#include <stdio.h>
#include <string.h>
int table[1001][10];

int main() {

	freopen("input.txt", "rt", stdin);

	int i, j, k, n, max = -2147000000, cnt, res;
	scanf("%d", &n);
	
	//��� �Է¹ޱ�
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 5; j++) {
			scanf("%d", &table[i][j]);
		}
	}
	
	for (i = 1; i <= n; i++) {
		cnt = 0;
		for (j = 1; j <= n; j++) {
			for (k = 1; k <= 5; k++) {
				if (table[i][k] == table[j][k]) {
					cnt++;
					break; //�����л� �ߺ�����
				}
			}
		}
		if (cnt > max) { //���� ū cnt�� i�� ���� (��� ���ŵ�)
			max = cnt;
			res = i;
		}
	}
	
	printf("%d", res);
	return 0;
}


//#include <stdio.h>
//int arr[1001][6];
//int cnt[1001];
//
//int main() {
//	
//	freopen("input.txt", "rt", stdin);
//	int n;
//
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j <= 5; i++) {
//			
//			int x = i;
//			int y = j;
//
//			for (int k = x+1; k <= n; k++) {
//				if (arr[x][y] == arr[k][y]) {
//					cnt[x++];
//					cnt[k++];
//				}
//			}
//		
//		}
//	}
//
//	int max = -2147000000;
//
//	for (int i = 1; i <= n; i++) {
//		if (cnt[i] > max) max = cnt[i];
//	}
//
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int n, table[1001][10];
//int main() {
//	int i, j, k, max = -2147000000, cnt, res;
//
//	freopen("input.txt", "rt", stdin);
//
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++) {
//		for (j = 1;j <= 5;j++) {
//			scanf("%d", &table[i][j]);
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		cnt = 0;
//		for (j = 1; j <= n; j++) {
//			for (k = 1; k <= 5; k++) {
//				if (table[i][k] == table[j][k]) {
//					cnt++;
//					break;
//				}
//			}
//		}
//		if (cnt > max) {
//			max = cnt;
//			res = i;
//		}
//	}
//	printf("%d", res);
//	return 0;
//}