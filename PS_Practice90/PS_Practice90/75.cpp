//75�� - �ִ� ���� ������(priority_queue ���빮��)

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;

struct Data {

	int money;
	int when;

	//������
	Data(int a, int b) {
		money = a;
		when = b;
	}

	//������ �����ε�
	bool operator <(Data &b) {
		return when > b.when; // > ��������
	}
};

int main() {
	
	freopen("input.txt", "rt", stdin);
	int n, a, b, res = 0, max = -999999999;
	
	vector<Data> T;
	priority_queue<int> pQ;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		T.push_back(Data(a, b));
		if (b > max)
			max = b;
	}
	
	sort(T.begin(), T.end());
	
	int j = 0;
	
	for (int i = max; i >= 1; i--) {
		for (; j < n; j++) {
			if (T[j].when < i) break;
			pQ.push(T[j].money);
		}
		if (!pQ.empty()) {
			res += pQ.top();
			pQ.pop();
		}
	}
	printf("%d\n", res);
	return 0;
}