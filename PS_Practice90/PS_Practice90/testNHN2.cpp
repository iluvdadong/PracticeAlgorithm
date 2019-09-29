//78�� - �������� Kruskal MST �˰��� : Union&Find Ȱ��

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int unf[1001];
int gas;

//�������� ����ü
struct Edge {

	int v1;
	int v2;
	int val;

	//������
	Edge(int a, int b, int c) {
		v1 = a;
		v2 = b;
		val = c;
	}
	//�����ڿ����ε� val ���� �������� ����
	bool operator<(Edge& b) {
		return val < b.val;
	}
};

int Find(int v) {
	//�迭�� ��ȣ�� ���� ���� ��ġ�ϴ��� ����(�����?)
	if (v == unf[v]) return v;
	else {
		return unf[v] = Find(unf[v]); //���
	}
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	//����ȵǾ� ������ ���������
	if (a != b) unf[a] = b;
}

int main() {

	freopen("input.txt", "rt", stdin);
	int v, e, a, b, c, cnt = 0, res = 0;

	//������ ���� ���� ����ü�� Vector�� �ֱ�
	vector<Edge> Ed;

	scanf("%d %d %d", &v, &gas, &e);

	//��� ������ �ڱ� �ܵ��� �����̶� �ʱ�ȭ
	for (int i = 1; i <= v; i++) {
		unf[i] = i;
	}

	for (int i = 1; i <= e; i++) {
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back((Edge(a, b, c)));
		//������ ȣ���� ���� edge������ vector�� ���ʴ�� ����
	}

	//����ġ ���� ���ؼ� (bool operator) �������� ����
	sort(Ed.begin(), Ed.end());

	for (int i = 0; i < e; i++) {
		//������ �����Ұž�? find �غ�
		int fa = Find(Ed[i].v1);
		int fb = Find(Ed[i].v2);

		//���� �ٸ� �����̸� ����(�� ����ȵ� ���¸�)
		if (fa != fb) {
			res += Ed[i].val;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}
	printf("%d\n", res);
	return 0;
}