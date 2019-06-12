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


/*

<string>에 정의된 getline함수

string str1;
string str2;

ifstream inf("test.txt");
getline(inf, str1); //파일 입출력
getline(cin, str2); //표준 입출력


*/