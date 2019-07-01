//BJ 5958

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num, sum, count;
	cin >> num;
	string ox;
	int array_sum[100] = {0, };
	
	for (int i = 0; i < num; i++) {
		sum = 0;
		count = 0;
		cin >> ox;
		{
			for (int j = 0; j < ox.length(); j++) {

				if (ox.at(j) == 'O') {
					count++;
					sum += count;
				}
				if (ox.at(j) == 'X') {	
					count = 0;
				}			
				
			}
			array_sum[i] = sum;
			sum = 0;
		}

	}

	for (int i = 0; i < num; i++) {

		cout << array_sum[i] << endl;
	}

}

