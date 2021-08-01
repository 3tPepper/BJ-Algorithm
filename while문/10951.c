//테스트 케이스의 개수가 정해지지 않는 경우 A+B 

#include <stdio.h>

int main(void) {
	int a=0, b=0;
	while (scanf_s("%d%d", &a, &b) != EOF) {
		if (a > 0 && a < 10 && b>0 && b < 10) {
			printf("%d\n", a + b);
		}
		else break;
	}
}
