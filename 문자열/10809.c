#include <stdio.h>

int main(void) {
	char s[100];
	int i = 0;
	
	scanf_s("%s", &s, sizeof(s));

	for (char c = 'a'; c <= 'z'; c++) {
		for (i = 0; i < sizeof(s); i++) {
			if (s[i] == '\0') break;
			if (s[i] == c) {
				printf("%d ", i);
				break;
			}
		}
		if (s[i] == '\0') {
			printf("%d ", -1);
		}
	}
	return 0;
}
