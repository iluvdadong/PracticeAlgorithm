////문제 3번 - 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하세 요.
//// 6의 약수 : 1 2 3 6
//// 6의 진약수 : 1 2 3
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int N;
//	int sum = 1;
//	cin >> N;
//
//	cout << "1";
//
//	for (int i = 2; i <N; i++) {
//		if (N%i == 0) {
//			sum += i;
//			cout << " + " << i;
//		}
//	}
//	cout << " = " << sum;
//}