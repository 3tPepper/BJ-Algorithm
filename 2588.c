//(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
//첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.
//첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
#include <stdio.h>

int main(void) {
	int num1 = 0, num2 = 0;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	if (num1 >= 100 && num1 <= 999 && num2 >= 100 && num2 <= 999) {
		int fir = 0, sec = 0, thi = 0;
		thi = num2 / 100;
		sec = (num2 / 10) - thi*10;
		fir = num2 - (thi * 100 + sec * 10);
		printf("%d\n", num1 * fir);
		printf("%d\n", num1 * sec);
		printf("%d\n", num1 * thi);
		printf("%d", num1 * num2);
	}
}
