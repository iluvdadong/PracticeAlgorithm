//// ����! 5�� ���� - ���̰�� 2 (���ڿ� ��Ʈ��)
//// �ƽ�Ű '0' ~ '9' 48~57
//// �ƽ�Ű 'A' ~ 'Z' 65~90
//// �ƽ�Ű 'a' ~ 'z' 97~122

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	//freopen("input.txt", "rt", stdin); //�о�ͼ� stdin���� �Ѱ�
//	char ipin[20];
//	int year, age;
//
//	scanf("%s", &ipin);
//	//����
//	if (ipin[7] == '1' || ipin[7] == '2')
//		year = 1900 + ((ipin[0] - 48) * 10 + (ipin[1] - 48)); //a[0]�� ���� 7�� ascii -  48�ؾ� ��¥ ���ڰ� ����
//	else
//		year = 2000 + ((ipin[0] - 48) * 10 + (ipin[1] - 48));
//	//������ �˸� 2019 ���� ���� �� �� ����
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