//두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	if (a >= 1 && a <= 10000 && b>=1 && b <= 10000) {
		printf("%d\n", a + b);
		printf("%d\n", a - b);
		printf("%d\n", a * b);
		printf("%d\n", a / b);
		printf("%d", a % b);
	}
	return 0;
}
