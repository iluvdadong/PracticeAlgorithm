////14492
////부울행렬의 부울곱
//
//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	int inputXY;
//	cin >> inputXY;
//
//	int** array = new int*[inputXY];
//	int** arraySecond = new int*[inputXY];
//	int number;
//
//	int* numberOneCountArray = new int[inputXY];
//
//	for (int i = 0; i < inputXY; ++i) {
//		array[i] = new int[inputXY];
//	}
//
//	for (int i = 0; i < inputXY; i++) {
//		for (int j = 0; j < inputXY; j++) {
//			cin >> number;
//			array[i][j] = number;
//		}
//	}
//
//	for (int i = 0; i < inputXY; ++i) {
//		arraySecond[i] = new int[inputXY];
//	}
//
//	for (int i = 0; i < inputXY; i++) {
//		for (int j = 0; j < inputXY; j++) {
//			cin >> number;
//			arraySecond[i][j] = number;
//		}
//	}
//	
//	int result=0;
//
//	for (int i = 0; i < inputXY; i++) {
//		for (int j = 0; j < inputXY; j++) {
//			result += array[i][j] * arraySecond[j][i];
//		}
//
//		numberOneCountArray[i] = result;
//		result = 0;
//	}
//
//	int count = 0;
//	for (int i = 0; i < inputXY; i++) {
//		if (numberOneCountArray[i] == 1)
//			count++;
//	}
//
//	cout << count << endl;
//}
//
