//// 8번 문제
//// 원래는 스택으로 풀면 좋지만 잔꾀를 이용해서도 가능ㅋ
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char a[31];
//	int count = 0;
//
//	scanf("%s", &a);
//
//	for (int i = 0; a[i] != '\0'; i++) {
//		if (a[i] == '(') count++;
//		else count--;
//
//		if (count<0)
//		break;
//	}
//
//	if (count == 0) printf("YES");
//	else printf("NO");
//
//	return 0;
//
//}