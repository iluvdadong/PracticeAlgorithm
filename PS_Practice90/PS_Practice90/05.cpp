//// 복습! 5번 문제 - 나이계산 2 (문자열 컨트롤)
//// 아스키 '0' ~ '9' 48~57
//// 아스키 'A' ~ 'Z' 65~90
//// 아스키 'a' ~ 'z' 97~122

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	//freopen("input.txt", "rt", stdin); //읽어와서 stdin으로 넘겨
//	char ipin[20];
//	int year, age;
//
//	scanf("%s", &ipin);
//	//연도
//	if (ipin[7] == '1' || ipin[7] == '2')
//		year = 1900 + ((ipin[0] - 48) * 10 + (ipin[1] - 48)); //a[0]은 문자 7임 ascii -  48해야 진짜 숫자가 나옴
//	else
//		year = 2000 + ((ipin[0] - 48) * 10 + (ipin[1] - 48));
//	//연도를 알면 2019 기준 나이 알 수 있음
//	age = 2019 - year + 1;
//	printf("%d ", age);
//
//	if (ipin[7] == '1' || ipin[7] == '3')
//		printf("M");
//	else
//		printf("W");
//
//	return 0;
//}