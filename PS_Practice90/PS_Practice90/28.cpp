// 28�� - N!������ 0�� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {

	int N, temp, cnt1 = 0, cnt2=0;
	scanf("%d", &N);

	for (int i = 2; i <= N; i++) {
		temp = i;
		int j = 2;
		while (1) {
			
			if (temp % j == 0) {
				if (j == 2) cnt1++;
				else if (j == 5) cnt2++;
				temp = temp / j;
			}

			else j++; //�ȳ������� ���ڳ����� ������
			if(temp == 1) break; //1�� ���صɶ����� ��
		}
	}

	if (cnt1 < cnt2) printf("%d", cnt1);
	else printf("%d", cnt2);
	return 0;
}