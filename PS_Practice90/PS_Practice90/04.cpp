//// 4�� ���� - N(2<=N<=100)���� ���̰� �Էµ˴ϴ�. �� N���� ��� �� ���� �������̰� ���� ���� ���� �� ���ϱ��? �ִ� ���� ���̸� ����ϴ� ���α׷��� �ۼ��ϼ���.
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
