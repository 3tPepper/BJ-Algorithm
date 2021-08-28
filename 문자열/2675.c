#include <stdio.h>

int main(void) {
	int t;
	int r;
	char s[20];

	scanf_s("%d", &t);
	if (t < 1 || t>1000) return 0;
	for (int i = 0; i < t; i++) {
		scanf_s("%d %s", &r, &s, sizeof(s));
		if (r < 1 || r>8) return 0;
		for (int j = 0; s[j] != '\0'; j++) {
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
