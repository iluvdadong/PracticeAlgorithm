#include <iostream>
#include <vector>
#include <string>
using namespace std;
int num[100];

int main() {

	int n, tmp, min = 2147000000;
	string s;
	bool flag, flag2;
	vector <string> str = {};

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		cin >> s;
		flag = true;
		//cout << s;
		for (int j = 0; j < str.size();j++) {
			if (str[j] == s) {
				num[j]++;
				flag = false;
				break;
			}
		}
		if (flag == true) {
			str.push_back(s);
			tmp = str.size() - 1;
			num[tmp]++;
		}
	}

	//for (int i = 0; i < str.size(); i++) {
	//	cout << str[i] << endl;
	//}

	//for (int i = 0; i < str.size(); i++) {
	//	cout << num[i] << endl;
	//}
	int firstNum;
	bool sameFlag = true;
	for (int i = 1; i < str.size(); i++) {
		firstNum = num[0];
		if (firstNum != num[i])
			sameFlag = false;
			break;
	}

	if (sameFlag == true) {
		printf("Y\n");
		printf("%d\n", n);
		printf("%d", str.size());
		exit(0);
	}

	for (int i = 0; i < str.size(); i++) {
		if (num[i] < min) min = num[i];
		if (num[i+1] == min) {
			printf("N\n");
			printf("%d\n", n);
			printf("%d", str.size());
			exit(0);
			
		}
	}
	

	for (int i = 0; i < str.size(); i++) {
		flag2 = true;
		if (num[i] != min) {
			if ((min + 1) != num[i]) {
				flag2 = false;
				printf("N\n");
				printf("%d\n", n);
				printf("%d", str.size());
				break;
			}
		} 
	}
	if (flag2 == true) {
		printf("Y\n");
		printf("%d\n", n+1);
		printf("%d\n", str.size());
	}
	return 0;
}