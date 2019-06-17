#include <iostream> //시간복잡도 O(n^2)
#include <time.h>
using namespace std;

void bubbleSort(int arr[], int size) {
	bool isSwap;
	do {
		isSwap = false;
		for (int i = 1; i < size; i++) {
			if (arr[i - 1] > arr[i]) {
				swap(arr[i - 1], arr[i]);
				isSwap = true;
			}
		}
	} while (isSwap);
}

int main() {
	int arr[] = { 9,8,7,4,2,6,1,3,5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, size);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}

