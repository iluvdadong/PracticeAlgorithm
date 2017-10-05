#include <iostream>
using namespace std;

int main() {

	int snackPriceK;
	int numOfSnackN;
	int moneyOfDongsuM;

	cin >> snackPriceK;
	cin >> numOfSnackN;
	cin >> moneyOfDongsuM;

	cout << ((((snackPriceK * numOfSnackN)- moneyOfDongsuM)>0) ? ((snackPriceK * numOfSnackN) - moneyOfDongsuM) : 0) << endl;

}