#include <stdio.h>

int main(void) {
	int a, b;
	int newA[3] = { 0, };
	int newB[3] = { 0, };
	scanf_s("%d %d", &a, &b);
	
	for (int i = 0; i < 3; i++) {
		newA[i] = a % 10;
		newB[i] = b % 10;
		a /= 10;
		b /= 10;
	}
	a = newA[0] * 100 + newA[1] * 10 + newA[2];
	b = newB[0] * 100 + newB[1] * 10 + newB[2];


	if (a>b) printf("%d", a);
	else printf("%d", b);
}
