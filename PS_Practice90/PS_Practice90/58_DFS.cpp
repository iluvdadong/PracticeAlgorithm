//58�� ����Ʈ�� ���̿켱Ž�� DFS: Depth First Search


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

void D(int v) {
	if (v > 7) return;
	else {
		//printf("%d", v); //������ȸ
		D(v * 2);
		//printf("%d", v); //������ȸ
		D(v * 2 + 1);
		printf("%d", v); //������ȸ

	}
}

int main() {
	
	D(1);
	return 0;

}