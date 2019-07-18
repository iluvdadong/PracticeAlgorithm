// 28번 - N!에서의 0의 개수

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

			else j++; //안나눠지면 숫자높여서 나누기
			if(temp == 1) break; //1로 분해될때까지 ㄱ
		}
	}

	if (cnt1 < cnt2) printf("%d", cnt1);
	else printf("%d", cnt2);
	return 0;
}