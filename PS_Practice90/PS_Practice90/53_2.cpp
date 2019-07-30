////53번 - K진수 출력 (스택이용) - STL사용
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack> //stck STL 사용
using namespace std;

int main() {

	int n, k;
	stack<int> s; //스택 자료구조 만듬

	//16진수를 위해, 15면 str의15인 F가 찍히는 것이다.
	char str[20] = "0123456789ABCDEF";

	scanf("%d %d", &n, &k);

	while (n > 0) {
		s.push(n % k);
		n = n / k;
	}

	//s.empty: 스택이 비어있으면 참(1)반환 꽉차있음(0)	
	while (!s.empty()) { 
		//str은 char배열이기 때문에 c로 찍어줘야 함
		//s.top는 맨위의 자료를 참조만 해주는 것
		printf("%c", str[s.top()]); 
		s.pop();//꺼내는 것
	}

	return 0;
}
