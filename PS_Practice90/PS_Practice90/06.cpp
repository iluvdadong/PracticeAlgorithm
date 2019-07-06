//// 6 숫자만 추출 - 아마존 인터뷰 문제
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char arr[50];
//	int res = 0;
//
//	scanf("%s", &arr);
//	 
//	for (int i = 0; arr[i] != 0; i++) { 
//		if (arr[i] >= 48 && arr[i] < 58) { //아스키코드
//			res = res * 10 + (arr[i] - 48); //문자형 숫자를 숫자형으로
//		}
//	}
//
//	printf("%d\n", res);
//	
//	int count = 0;
//
//	for (int i = 1; i <= res; i++) { //약수구하기
//		if (res % i == 0) count++;
//	}
//
//	printf("%d\n", count);
//	return 0;
//
//}
