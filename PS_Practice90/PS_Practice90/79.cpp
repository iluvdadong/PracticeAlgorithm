//79�� �������� - �켱����ť Ȱ��

//78�� - �������� Kruskal MST �˰����� : Union&Find Ȱ��

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int ch[30];

struct Edge {

	int e; //���
	int val; //���� ����ġ��
	
	//�����ڷ� �Է��� (���, ������) ����
	Edge(int a, int b) {
		e = a;
		val = b;
	}
	
	bool operator<(const Edge &b)const {
		return val > b.val; //�ּ������� ���ϵ�
							//�ε�ȣ ������ < �� �ϸ� �ִ������� ���ϵ�
	}
};

int main() {

	freopen("input.txt", "rt", stdin);
	
	priority_queue<Edge> Q;

	//����ġ ��������Ʈ ������ ����
	vector<pair<int, int> > map[30];

	int n, m, a, b, c, res = 0;

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		
		//������ ����ġ ��������Ʈ a->b, b->a ����
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}

	//�˰����� ����
	Q.push(Edge(1, 0)); //������ ��� ����

	while (!Q.empty()) {
	
		//2��° �������� ť���� ���� ���� �� ����
		Edge tmp = Q.top();
		Q.pop(); //���� (1, 0) ����

		int v = tmp.e;
		int cost = tmp.val;
		
		//�̹� ������ �����̳� �ƴϳ� Ȯ��
		if (ch[v] == 0) {
			res += cost;
			ch[v] = 1;
			for (int i = 0; i < map[v].size(); i++) {
				Q.push(Edge(map[v][i].first, map[v][i].second));
				//first : ������ȣ secnd : ������
				//Edge�� �����ڰ� �� ���� push ���ش�.
			}
		}
	}
	printf("%d\n", res);
	return 0;
}