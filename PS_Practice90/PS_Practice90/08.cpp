//// 8번 - 올바른 괄호 : 문자열 컨트롤
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////60점짜리 // (()))( 일 경우를 고려안함
//int main() {
//
//	char a[31];
//	scanf("%s", &a);
//
//	int cnt1 = 0, cnt2 = 0;
//
//	for (int i = 0; a[i] != '\0'; i++) {
//		if (a[i] == '(') cnt1++;
//		if (a[i] == ')') cnt2++;
//	}
//
//	if (cnt1 == cnt2) printf("YES");
//	else printf("NO");
//
//	return 0;
//}