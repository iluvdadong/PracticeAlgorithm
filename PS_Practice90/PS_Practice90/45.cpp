//45�� - ���ֱ��ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	//bp : break point�� n-1��ŭ ���� �ƿ���Ű�� ���� ��
	int n, k, pos=0, bp=0, cnt=0;
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);

	while (1) {
		pos++;
		if (pos > n) pos = 1;
		if (prince[pos] == 0) {
			cnt++;
			if (cnt == k) {
				prince[pos] = 1; //out
				cnt = 0;
				bp++; //�Ѹ�ƿ�
			}
		}
		if (bp == n - 1) break;
	}

	for (int i = 1; i <= n; i++) {
		if (prince[i] == 0) printf("%d", i);
	}
	return 0;
}