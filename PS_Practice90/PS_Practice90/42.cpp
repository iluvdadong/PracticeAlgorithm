//42번 - 이분검색

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	freopen("input.txt", "rt", stdin);

	int n, key,tmp;
	scanf("%d %d", &n, &key);
	vector<int> a;

	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());
	
	//이분검색 - mid로 찾는것
	int lt = 0, rt = n - 1;
	
	while (lt <= rt) { //lt와 rt가 교차될 때 멈추라는것
		
		int mid = (lt + rt) / 2;
		if (a[mid] == key) {
			printf("%d", mid + 1);
			return 0;
		}
		else if (a[mid] > key)
			rt = mid - 1;
		else if (a[mid] < key)
			lt = mid + 1;
	}
	
	return 0;
}

