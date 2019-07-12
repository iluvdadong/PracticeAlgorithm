// BJ 2164
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
using namespace std;

int main(void) {

	int N;
	cin >> N;

	deque<int> dp;

	for (int i = 1; i <= N; i++) {
		dp.push_back(i);
	}

	

	while (dp.size() != 1) {
	
		dp.pop_front();
		dp.push_back(dp.front());
		dp.pop_front();
	
	}

	printf("%d", dp.front());
	return 0;




}