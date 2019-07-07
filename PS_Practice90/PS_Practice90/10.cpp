//// 10번 - 자릿수의 합
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int digit_sum(int x) {
//	
//	int sum = 0, temp;
//	
//	while (x > 0) {
//		temp = x % 10;
//		sum += temp;
//		x = x / 10;
//	}
//
//	return sum;
//}
//
//int main() {
//
//	int n, num=0, sum, max= -2147000000, res;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &num);
//		sum = digit_sum(num);
//		if (sum > max) {
//			max = sum;
//			res = num;
//		}
//	}
//
//	printf("%d", res);
//	return 0;
//}
