//// 4번 문제 - N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 몇 살일까요? 최대 나이 차이를 출력하는 프로그램을 작성하세요.
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//
//	int N, temp;
//	int arr[100];
//
//	ifstream is;
//	is.open("input.txt");
//
//	is >> N;
//	for (int i = 0; i < N; i++) {
//		is >> arr[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (arr[j] > arr[j+1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//
//	ofstream out;
//	out.open("../output.txt");
//	out << arr[N - 1] - arr[0];
//
//	//for (int i = 0; i < N; i++) {
//	//	cout << arr[i] << " ";
//	//}
//
//
//}
