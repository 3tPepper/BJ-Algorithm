#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num[10] = { 0 };
	int count[42] = { 0 };
	int result = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
		if (num[i] > 1000 && num[i] < 0) {
			return -1;
		}
		int remain = num[i] % 42;
		if (count[remain] == 0) {	//앞에서 한번도 나온 적 없는 나머지이면,
			count[remain] ++;	//count[remain]에 1값을 넣어 나왔던 나머지임을 표시
			result++;	//서로 다른 나머지 카운트 1 증가
		}
	}
	printf("%d", result);
	return 0;

}
