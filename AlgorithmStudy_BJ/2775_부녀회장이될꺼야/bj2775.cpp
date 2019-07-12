// bj2775

#include <iostream>
using namespace std;

int main() {

	int array[15][14] = {0, };
	for (int i = 0; i < 14; i++) {
		array[0][i] += i + 1;
		array[i + 1][0] = 1;
	}

	//for (int i = 0; i < 14; i++)
	//	cout << array[0][i] << " ";

	for (int i = 1; i < 14; i++) {
		for (int j = 1; j < 15; j++) {
			array[j][i] = array[j][i - 1] + array[j - 1][i];
		}
	}

	int t;
	cin >> t;

	int k, n;
	while (t--) {

		scanf_s("%d \n %d", &k, &n);
		printf("%d \n", array[k][n - 1]);
	
		}

	return 0;
	}


