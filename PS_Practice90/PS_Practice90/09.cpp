// // 9�� - ����� ��� ���ϱ�
//// ������ ����� ������ ã�°� �ƴ϶�
//// �� ������ ����� ã�� cnt++�Ͽ� ������ ���Ѵ�
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
//		//j �� i���� �����Ͽ� i�� ����� Ŀ���ٴ� ���� �߿�
//		for (int j = i; j <= n; j += i) { //j = j+i : ������ i�� ����� ã��
//			cnt[j]++;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", cnt[i]);
//	}
//	return 0;
//}