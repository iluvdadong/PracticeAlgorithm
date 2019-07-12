// Baekjook 10219

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string gogi[11];

void flip(int x, int y) {

	for (int j = 0; j < y; j++) {
		reverse(gogi[j].begin(), gogi[j].end());
		cout << gogi[j] << endl;
	}

}

int main() {

	int testcase;
	cin >> testcase;

	while (testcase) {

		int h, w;
		cin >> h >> w;
		for (int i = 0; i < h; i++) {
			cin >> gogi[i];
		}

		//모양그대로 뒤집기만 하면 됨
		flip(w,h);
		testcase--;
	}

}