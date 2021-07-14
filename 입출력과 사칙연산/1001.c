//첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
//첫째 줄에 A-B를 출력한다.
#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);    //visual studio 2019를 사용하기 때문에 scanf_s 사용하였습니다.
	if (a > 0 && a < 10 && b>0 && b < 10) {
		printf("%d", a - b);
	}
	return 0;
}
