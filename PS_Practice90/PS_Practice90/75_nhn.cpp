//75번 - 최대 수입 스케쥴(priority_queue 응용문제)

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;

struct Data {

	int money;
	int when;

	//생성자
	Data(int a, int b) {
		money = a;
		when = b;
	}

	//연산자 오버로딩
	bool operator <(Data &b) {
		return when > b.when; // > 내림차순
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