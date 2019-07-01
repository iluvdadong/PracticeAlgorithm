//선택정렬 Selection Sort

#include <iostream>
using namespace std;

int main(void) {

	int min, index, temp;
	int array[6] = { 5,2,6,1,3,4 };

	for (int i = 0; i < 6; i++) {
		min = 999;
		for (int j = i; j < 6; j++) {
			if (array[j] < min) { //가장 작은 수 찾는 파트
				min = array[j];
				index = j;
			}
		}

		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (int i = 0; i < 6; i++)
		cout << array[i] << " ";

	return 0;
}