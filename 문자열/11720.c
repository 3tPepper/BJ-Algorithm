#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	char c[100];
	int sum=0;

	scanf_s("%d", &n);
	if (n < 1 || n>100) return 0;	
	scanf_s("%s", &c, sizeof(c));
	for (int i = 0; i < n; i++) {
		sum += c[i] - 48;
	}
	printf("%d", sum);
	return 0;
}
