//입력 최대 100줄 -> 각 줄 100자 이하
//알파벳 소문자대문자, 숫자, 공백
//빈줄 가능, 각줄의 앞뒤에 공백 가능

#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;

	for (int i = 0; i < 100; i++) {
		getline(cin, str);
		cout << str << endl;
	}

	return 0;
}
