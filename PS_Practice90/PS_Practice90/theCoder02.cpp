// The Coder 02 - 격자판 채우기(2차원 배열)
// 완료 - 40분 소요 (배열의 이름과 입력값 변수를 같은 a로 같은 이름으로 하는 바람에 15분 추가소요됐습니다.)

#include <stdio.h>

int arr[11][11];

int main() {

	int n, r, a, b, c, d;

	freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &r);

	for (int i = 1; i <= r; i++) {

		scanf("%d %d %d %d", &a, &b, &c, &d);

		if (b == 1) {
			for (int i = c; i < c + a; i++) {
				int j = d;
				arr[i][j] = 1;
			}
		}
		else if (b == 0) {
			for (int i = d; i < d + a; i++) {
				int j = c;
				arr[j][i] = 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", arr[i][j]);
		}
		puts("");
	}

	return 0;
}