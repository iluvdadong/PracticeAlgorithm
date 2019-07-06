// // 9번 - 모두의 약수 구하기
//// 각각의 약수의 갯수를 찾는게 아니라
//// 각 숫자의 배수를 찾아 cnt++하여 갯수를 구한다
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int cnt[50001] = {0,};
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++) {
//		//j 가 i부터 시작하여 i의 배수로 커진다는 것이 중요
//		for (int j = i; j <= n; j += i) { //j = j+i : 역으로 i의 배수를 찾음
//			cnt[j]++;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", cnt[i]);
//	}
//	return 0;
//}