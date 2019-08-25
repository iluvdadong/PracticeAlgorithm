#include <iostream>
#include <vector>

using namespace std;

int number = 9; //��� ��
int visit[9];
vector<int> a[10];

void dfs(int start) {

	if (visit[start]) {
		return; //�湮�� ��� �ٷ� ��������
	}

	visit[start] = true; //�湮
	cout << start << " ";

	for (int i = 0; i < a[start].size(); i++) {
		//���� ��� �湮
		int x = a[start][i];
		dfs(x);
	}
}

int main(void) {

	//1�� 2����
	a[1].push_back(2);
	a[2].push_back(1);

	//1�� 3����
	a[1].push_back(3);
	a[3].push_back(1);

	//2�� 4����
	a[2].push_back(4);
	a[4].push_back(2);

	//4�� 8����
	a[4].push_back(8);
	a[8].push_back(4);

	//2�� 5����
	a[2].push_back(5);
	a[5].push_back(2);

	//5�� 9����
	a[5].push_back(9);
	a[9].push_back(5);

	//3�� 6����
	a[3].push_back(6);
	a[6].push_back(3);

	//3�� 7����
	a[3].push_back(7);
	a[7].push_back(3);

	dfs(1); //1���� ����

	return 0;

}