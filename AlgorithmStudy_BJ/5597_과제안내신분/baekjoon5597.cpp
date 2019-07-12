// Baekjoon 5597 - 과제 안내신 분?
// #include <bits/stdc++.h>

#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[30] = { 0, };
	int temp;
	for (int i = 0; i < 28; i++) {
	
		cin >> temp;
		arr[temp - 1] = 1; //30개 배열에서 해당 숫자가 입력된 자리에 1입력
	}

	for (int i = 0; i < 30; i++) {
					
		if (!arr[i]) //주의: 배열의 값을 출력하는게 아니라 i값을 출력해야함
			cout << i+1 << endl;		//부정연산자로 true -> false / fasle -> true
	}							// 1 안 들어가있으면 cout -> 입력 안된자리

}