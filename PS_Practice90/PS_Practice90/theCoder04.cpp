// The Coder 04 - ȸ��(�⺻�ڵ�)
// �Ϸ� - 30�� �ҿ� (���ڿ� �ޱ� %s�� �򰥷��� ������ �⺻ 8�� ���� �����Ͽ� �ذ��߽��ϴ�.)

#include <stdio.h>
#include <String>
char arr[21];

int main() {

	freopen("input.txt", "rt", stdin);
	int n, length;
	scanf("%d", &n);
	bool flag = 0;

	for (int i = 1; i <= n; i++) {
		
		scanf("%s", &arr);

		//strlen(arr)�� �Էµ� ������ ���ݸ�ŭ for�� ���� �ٴ� �� ���ͳ����� �˰Եƽ��ϴ�.
		length = strlen(arr); //�Էµ� ���ڿ� ���� ����
		for (int j = 0; j < length / 2; j++) {
		
			//������ʹ� �ٽ� ������ �ۼ��߽��ϴ�.
			if (arr[j] == arr[length - j - 1]) {
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
		}

		if (flag == 1) printf("%s\n", arr);
	}
	return 0;
}