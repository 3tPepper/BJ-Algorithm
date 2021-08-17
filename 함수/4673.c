#include <stdio.h>

int num[10001] = { 0 };
void d(int n);

int main(void) {
	for (int i = 1; i <= 10000; i++) {
		d(i);
	}
	for (int i = 1; i <= 10000; i++) {
		if (num[i] != 1) { printf("%d\n", i); }
	}
	return 0;
}

void d(int n) {
	int self_num = n;
	while (n != 0) {
		self_num += n % 10;
		n /= 10;
	}
	if (self_num <= 10000) {
		num[self_num] = 1;
	}
}
