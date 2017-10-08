//classic Matix Multiply Problem Practice

#include <iostream>
using namespace std;

void matrixMultiply() {

	int matrixA[2][3] = { {1,0,2}, 
						{1,1,4} };

	int matrixB[3][2] = { {1,2},
					   	{2,0},
						{3,4} };

	int resultMarix[2][2] = { {0,}, };
	int result = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
			
				result += matrixA[i][k] * matrixB[k][j];
			}

			resultMarix[i][j] = result;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << resultMarix[i][j] << " ";
		}
		cout << endl;
	}

}

int main() {

	matrixMultiply();
	return 0;

}