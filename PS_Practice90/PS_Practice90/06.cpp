//// 6 ���ڸ� ���� - �Ƹ��� ���ͺ� ����
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
//		if (arr[i] >= 48 && arr[i] < 58) { //�ƽ�Ű�ڵ�
//			res = res * 10 + (arr[i] - 48); //������ ���ڸ� ����������
//		}
//	}
//
//	printf("%d\n", res);
//	
//	int count = 0;
//
//	for (int i = 1; i <= res; i++) { //������ϱ�
//		if (res % i == 0) count++;
//	}
//
//	printf("%d\n", count);
//	return 0;
//
//}
