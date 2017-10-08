//백준 14492
//부울행렬의 부울곱

#include <iostream>
using namespace std;


int main() {

	int inputXY;
	cin >> inputXY;

	int** array = new int*[inputXY];
	int** arraySecond = new int*[inputXY];
	int number;

	int* numberOneCountArray = new int[inputXY];

	for (int i = 0; i < inputXY; ++i) {
		array[i] = new int[inputXY];
	}

	//첫째 행렬 값 대입
	for (int i = 0; i < inputXY; i++) {
		for (int j = 0; j < inputXY; j++) {
			cin >> number;
			array[i][j] = number;
		}
	}

	for (int i = 0; i < inputXY; ++i) {
		arraySecond[i] = new int[inputXY];
	}

	//둘째 행렬 값 대입
	for (int i = 0; i < inputXY; i++) {
		for (int j = 0; j < inputXY; j++) {
			cin >> number;
			arraySecond[i][j] = number;
		}
	}

	//두 행렬의 부울곱 계산
	int resultCount = 0;

	for (int i = 0; i < inputXY; i++) {
		for (int j = 0; j < inputXY; j++) {

			bool check = false;
			for (int k = 0; k < inputXY; k++) {

				check |= array[i][k] && arraySecond[k][j];

				if (check) {
					resultCount++;
					break;
				}

			}
		}
	}

	cout << resultCount << endl;
	return 0;

}

