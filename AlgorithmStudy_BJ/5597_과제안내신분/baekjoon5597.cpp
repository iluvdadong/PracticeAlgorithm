// Baekjoon 5597 - ���� �ȳ��� ��?
// #include <bits/stdc++.h>

#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[30] = { 0, };
	int temp;
	for (int i = 0; i < 28; i++) {
	
		cin >> temp;
		arr[temp - 1] = 1; //30�� �迭���� �ش� ���ڰ� �Էµ� �ڸ��� 1�Է�
	}

	for (int i = 0; i < 30; i++) {
					
		if (!arr[i]) //����: �迭�� ���� ����ϴ°� �ƴ϶� i���� ����ؾ���
			cout << i+1 << endl;		//���������ڷ� true -> false / fasle -> true
	}							// 1 �� �������� cout -> �Է� �ȵ��ڸ�

}