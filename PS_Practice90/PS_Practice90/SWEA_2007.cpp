// �ＺSWEA 2007 - D2 ���ϸ����� ����

#include <iostream>
using namespace std;
char str[31];

int getRepeatingSize() {
	
	//2�ڷ� �ݺ��Ǵ��� ���� ����
	for (int i = 2; i <=10; i++) {
		bool flag = true;
		for (int j = 0; j < i; j++) {
			if (str[j] != str[j+i]) {
				flag = false;
				break;
			}
		}
		if(flag) return i;
	}
	return 1;
}

int main() {

	freopen("input.txt", "rt", stdin);
	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		scanf("%s", &str);
		
		//�˰����� �� ���
		printf("#%d %d\n", i, getRepeatingSize());
	}
}

//#include <iostream>
//using namespace std;
//char str[31];
//int get_repeating_size() {
//	for(int size=2; size<=10; size++) {
//		bool repeating = true;
//		for(int i=0; i<size; i++) {
//			if(str[i] != str[i+size]) {
//				repeating = false;
//				break;
//			}
//		}
//		if( repeating ) return size;
//	}
//	return 1;
//}
//int main() {
//	int T;
//	scanf("%d", &T);
//	for (int tc=1; tc<=T; tc++) {
//		scanf("%s", str);
//		printf("#%d %d\n", tc, get_repeating_size());
//	}
//}