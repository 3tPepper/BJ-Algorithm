#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num[3] = {0};
	int mul = 1;
	int count[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &num[i]);
		if (num[i] < 100 && num[i] >= 1000) {
			return -1;
		}
		mul *= num[i];
	}
	while (mul != 0) {
		count[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	return 0;

}
