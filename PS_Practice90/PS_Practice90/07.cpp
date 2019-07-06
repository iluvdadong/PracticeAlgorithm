//// 7번 - 영어단어 복구
//
//#include <stdio.h>
//#include <iostream>
//
//int main() {
//
//	char a[101];
//	char b[101];
//
//	gets_s(a);
//	int j = 0;
//	for (int i = 0; a[i] != '\0'; i++) {
//		if (a[i] != ' ') {
//			if (a[i] >= 65 && a[i] <= 90) {
//				b[j++] = a[i] + 32;
//				//주의! b[i] 아님! 조건문 될때만 들어오기때문에 iterator새로 생성 필요
//			}
//			else {
//				b[j++] = a[i];
//			}
//		} 
//	}
//	//b배열 마지막에 '\0' 반드시 삽입해야 이상한 값 안나옴
//	b[j] = '\0';
//	printf("%s", b); //%s 이용하면 b배열 한번에 다 출력됨
//	return 0;
//
//
//}