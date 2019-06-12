//피보나치 수 구하는 알고리즘
#include <stdio.h>

int Fibonnacci(int n) {
	if (n == 0) 
		return 0;
	else if (n == 1) 
		return 1;
	else return 
		Fibonnacci(n - 2) + Fibonnacci(n - 1);
}

int main(void){
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", Fibonnacci(i));	
	return 0;
}