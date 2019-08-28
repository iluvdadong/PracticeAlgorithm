// The Coder 04 - 회문(기본코딩)
// 완료 - 30분 소요 (문자열 받기 %s가 헷갈려서 인프런 기본 8번 문제 참고하여 해결했습니다.)

#include <stdio.h>
#include <String>
char arr[21];

int main() {

	freopen("input.txt", "rt", stdin);
	int n, length;
	scanf("%d", &n);
	bool flag = 0;

	for (int i = 1; i <= n; i++) {
		
		scanf("%s", &arr);

		//strlen(arr)로 입력된 글자의 절반만큼 for문 돌린 다는 것 인터넷으로 알게됐습니다.
		length = strlen(arr); //입력된 문자열 길이 구함
		for (int j = 0; j < length / 2; j++) {
		
			//여기부터는 다시 스스로 작성했습니다.
			if (arr[j] == arr[length - j - 1]) {
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
		}

		if (flag == 1) printf("%s\n", arr);
	}
	return 0;
}