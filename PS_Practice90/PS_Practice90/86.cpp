//86�� - ���� ��� �Ÿ� (�Ｚ SW������ ���⹮�� DFS)

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair <int, int> > pz;
vector<pair <int, int> > hs;
int ch[20], m, res = 2147000000, dis, sum = 0;

//m: ��Ƴ��� ������ ��
//L�� ���ڰ��� ��ȣ ex. ���ڰ��� 6���� 0������~5������
//cnt �迭�� �ε���

void DFS(int L, int cnt) {
	
	//���ڰ��� ��ȣ�� ���ڰ����� �������� Ŀ���� �׸��ض�
	if (L > pz.size()) return;
	//cnt: ���õ� ���ڰ����� ����
	if (cnt == m) {
		sum = 0;
		for (int i = 0; i < hs.size(); i++) {
			int x1 = hs[i].first;
			int y1 = hs[i].second;

			dis = 2147000000; //�ּ� ã�� ����

			//���� ���ڰ��Ե� �Ÿ� ��
			for (int j = 0; j < m; j++) {
				int x2 = pz[ch[j]].first;
				int y2 = pz[ch[j]].second;

				//�������� ���ڰ��Կ��� �Ÿ��� ����
				dis = min(dis, abs(x1 - x2) + abs(y1 - y2));
			}
			//������ ���ڹ�ްŸ�
			sum = sum + dis;
		}

		//������ ���ڹ�ްŸ� �� ���� ���� ��
		if (sum < res) res = sum;
	}
	else {
		//ch�� ���ڰ��� ��ȣ�� ���� ����
		//��Ƴ������� �ȳ������� 
		ch[cnt] = L;
		DFS(L + 1, cnt + 1); //��Ƴ���
		ch[cnt] = 0;
		DFS(L + 1, cnt); //�Ȼ�Ƴ���
	}
}

int main() {

	freopen("input.txt", "rt", stdin);
	int n, a;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &a);
			//���� ������ ��ǥ ���� ���ؼ� �迭�� ����
			if (a == 1) hs.push_back(make_pair(i, j));
			else if (a == 2) pz.push_back(make_pair(i, j));
		}
	}

	DFS(0, 0);
	printf("%d\n", res);
	return 0;
}