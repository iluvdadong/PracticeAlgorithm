//practicealgorithm basicproblems_100
//190610: 01~11 완료 

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//	
//	string a;
//	std:cin >> a;
//	std::cout << a << std::endl;
//
//	return 0;
//}
//
// 6면 주사위 100번 굴려서 나온 각 면의수를 배열에 저장하여 출력

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	int hist[6] = { 0, }; // 배열로 6개 주사위 눈금만큼 공간 할당
	int n, i = 0; //상수 초기화
	srand(time(null)); //랜덤함수 생성

	do {
		i++;
		n = rand() % 6 + 1; // rand()%6 + 1 -> 1~6까지 숫자 나옴
		hist[n - 1] += 1;
	} while (i < 100);

	for (i = 0; i < 6; i++)
		print("[%d] = %d\n", i + 1, hist[i])

}