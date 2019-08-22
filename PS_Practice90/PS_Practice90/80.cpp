//80�� - ���ͽ�Ʈ�� �˰���
//����������� �ٸ� ��� �������� ���� �ּҺ���� �˷���

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<pair<int, int> > map[30];
int ch[30], dist[30];

int main() {

	freopen("input.txt", "rt", stdin);
	
	int n, m, a, b, c, min;
	scanf("%d %d", &n, &m);

	//����׷��� ��������Ʈ �����
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}

	//ù��° �迭 0 ������ ���Ѵ밪���� �ʱ�ȭ
	for (int i = 0; i <= n; i++) dist[i] = 999999999;
	dist[1] = 0;

	for (int i = 1; i <= n; i++) {
		min = 0;

		//dist�迭�� ���� ���� ���Ұ� ã��
		for (int j = 1; j <= n; j++) {
			if (ch[j] == 0 && dist[j] < dist[min])
				min = j; //j�� ����
		}
		ch[min] = 1; //���� ���� ���� üũ

		for (int j = 0; j < map[min].size(); j++) {
			//min�������� �� �� �ִ� ��簪 Ž��
			int v = map[min][j].first;
			//���
			int cost = map[min][j].second;

			//�������� ������ �ٲ����
			if (dist[v] > dist[min] + cost) { //1�������� min���� ���� ��� + min���� v��� �������� ���� ���
				dist[v] = dist[min] + cost;
			}
		}
	}
	
	for (int i = 2; i <= n; i++) {
		if (dist[i] != 999999999) printf("%d : %d\n", i, dist[i]);
		else printf("%d : impossible\n", i);
	}
	return 0;
}



