#include<stdio.h>
using namespace std;
int n = 3, cnt = 0, x;
int a[20], res[20], ch[20];

void DFS(int L) {
	if (L == 3) {
		for (int j = 0; j < L; j++) {
			if(cnt == x) printf("%d", res[j]);
		}
		cnt++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 0) {
				res[L] = a[i];
				ch[i] = 1;
				DFS(L + 1);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	//freopen("input.txt", "rt", stdin);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);
	DFS(0);
	return 0;
}