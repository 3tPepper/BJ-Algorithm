//첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
//첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.

#include <stdio.h>

int main(void) {
	int a = 0, b = 0, c = 0;
	int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= 2 && a <= 10000 && b >= 2 && b <= 10000 && c >= 2 && c <= 10000) {
		ans1 = (a + b) % c;
		ans2 = ((a % c) + (b % c)) % c;
		ans3 = (a * b) % c;
		ans4 = ((a % c) * (b % c)) % c;
		printf("%d\n%d\n%d\n%d", ans1, ans2, ans3, ans4);
	}
	return 0;
}
