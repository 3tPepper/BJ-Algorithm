//첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
//첫째 줄에 A/B를 출력한다. 
//실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.
#include <stdio.h>

int main(void) {
	double a = 0, b = 0;
	scanf_s("%lf %lf", &a, &b);
	if (a > 0 && a < 10 && b>0 && b < 10) {
		printf("%.9lf", (double)a / (double)b);   //오차때문에 소수점 아래 9번째 자리까지 출력해야 했다.
	}
	return 0;
}
