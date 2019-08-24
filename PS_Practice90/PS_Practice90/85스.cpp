#include <stdio.h>

int n, res=0 max=-2147000000, min=2147000000;
int a[20], op[5];

void DFS(int L, int res) {

	if (L == n) {
		if (res > max) max = res;
		if (res < min) min = res;
	}
	else {
		if (op[0] > 0) {
			op[0]--;
			DFS(L + 1, res + a[L]);
			op[0]++;
		}
		if (op[1] > 0) {
			op[1]--;
			DFS(L + 1, res - a[L]);
			op[1]++;
		}
		if (op[2] > 0) {
			op[2]--;
			DFS(L + 1, res * a[L]);
			op[2]++;
		}
		if (op[3] > 0) {
			op[3]--;
			DFS(L + 1, res / a[L]);
			op[3]++;
		}

	}

}

int main() {
	
	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &op[i]);
	}

	DFS(1, a[0]);
	printf("%d\n %d\n", max, min);

}