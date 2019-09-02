// 삼성SWEA 1979 - D2 어디에 단어가 들어갈 수 있을까
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	freopen("input.txt", "rt", stdin);
//	int tc, table[15][15], k, n, res=0, cnt = 0;
//
//	scanf("%d %d %d", &tc, &n, &k);
//
//	for (int t = 1; t <= tc; t++) {
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				scanf("%d", &table[i][j]);
//			}
//		}
//			
//		//가로
//		for (int i = 0; i < n; i++) {
//			cnt = 0;
//			for (int j = 0; j < n; j++) {
//				if (table[i][j] == 1 && cnt < k) cnt++;
//				else {
//					cnt = 0;
//				}
//			}
//			if (cnt == k)
//				res++;
//		}
//		
//		//세로
//		for (int i = 0; i < n; i++) {
//			cnt = 0;
//			for (int j = 0; j < n; j++) {
//				if (table[j][i] == 1 && cnt < k) cnt++;
//				else {
//					cnt = 0;
//				}
//			}
//			if (cnt == k)
//				res++;
//		}
//
//	printf("#%d %d\n", t, res);
//	
//	}
//
//	return 0;
//}

#include<iostream>

using namespace std;

int map[15][15];

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> map[i][j];
			}
		}

		int result = 0, tmp1 = 0, tmp2 = 0;
		for (int i = 0; i < n; i++) {
			tmp1 = 0;
			for (int j = 0; j < n; j++) {
				if (map[i][j] == 1) {
					tmp1++;
				}
				else {
					if (tmp1 == k) result++;
					tmp1 = 0;
				}
			}
			if (tmp1 == k) result++;
		}

		for (int j = 0; j < n; j++) {
			tmp2 = 0;
			for (int i = 0; i < n; i++) {
				if (map[i][j] == 1) {
					tmp2++;
				}
				else {
					if (tmp2 == k) result++;
					tmp2 = 0;
				}
			}
			if (tmp2 == k) result++;
		}

		cout << "#" << i + 1 << " " << result << "\n";


	}
}