// BJ 2884 - �˶��ð�
// test case�� 0 40 ����

#include <iostream>
using namespace std;

int main(void) {

	//H �Է¹ޱ� (0<=H<=23) (0<=M<=59)
	int h,m;
	cin >> h >> m;

	if (m >= 45) {
		m -= 45;
	}
	else {
		if (h == 0) {
			m += 60 - 45;
			h = 24 - 1;
		}
		else {
			h--;
			m += 60;
			m -= 45;
		}
	}

	cout << h << " " << m;

	return 0;
}