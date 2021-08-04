//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
//한줄로 한꺼번에 입력해야 하는 줄 알고 동적 배열을 사용했는데, 다른 사람의 풀이를 보니 한꺼번에 입력받지 않아도 되는 모양.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int* arr;
	int min, max;
	scanf_s("%d", &n);
	if (n < 1 || n > 1000000) { return -1; }
		arr = (int*)malloc(sizeof(int) * n);

		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
			if (arr[i] < -1000000 || arr[i]>1000000) {return -1;}
		}
		min = arr[0];
		max = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
			else if (arr[i] > max) {
				max = arr[i];
			}
		}
		printf("%d %d", min, max);
	
	return 0;
}
