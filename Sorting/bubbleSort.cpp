#include <iostream>
#include <array>
using namespace std;

int main(void) {

	int array[6] = { 5,3,4,1,2,6 };
	int temp;
	for (int i = 0; i < 6; i++) {
		for(int j = 0; j < 5 - i; j++) { //맨 뒤의 값은 정렬되었기 때문에 - i로 빼준다
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < 6; i++) {
		cout << array[i] << " ";
	}
	
	return 0;


}