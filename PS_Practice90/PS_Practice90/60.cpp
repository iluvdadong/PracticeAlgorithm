//60번 - 합이 같은 부분집합 DFS 아마존 인터뷰

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int n, a[11], total=0;
bool flag = false;

void DFS(int L, int sum) { //sum으로 부분집합 합 컨트롤 할것임
	
	if (sum > total / 2) return; //2개의 부분집합 합이 같아야하니 절반이상은 될 수 X
	if (flag == true) return;

	if (L == n+1) {
		if (sum == (total - sum)) {
			flag = true;
		}
	}
	else {
		DFS(L + 1, sum + a[L]); //level증가 sum은 누적
		DFS(L + 1, sum); //level증가 sum은 사용X
	}
}


int main() {

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}

	DFS(1, 0); //level과 원소의 합이 넘어감
	if (flag == true) printf("YES");
	else printf("NO");

	return 0;
}