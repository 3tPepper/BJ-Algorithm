#include <stdio.h>
#include <string.h>

char string[1000000];
int main(void) {
	int word=1;
	scanf_s("%[^\n]s", &string, sizeof(string));
	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == ' ') {
			word++;
		}
	}
	if (string[0] == ' ') {
		word--;
	}
	if (string[strlen(string) - 1] == ' ') {
		word--;
	}
	printf("%d", word);
	return 0;
}
