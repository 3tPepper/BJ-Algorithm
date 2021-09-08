#include <stdio.h>

int main(void) {
	char word[101];
	int count = 0;
	scanf_s("%s", &word, sizeof(word));

	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '-' || word[i + 1] == '=') {
				i++;
			}
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') {
				i += 2;
			}
			else if (word[i + 1] == '-') {
				i++;
			}
		}
		else if (word[i] == 'l' || word[i] == 'n') {
			if (word[i + 1] == 'j') {
				i++;
			}
		}
		else if (word[i] == 's' || word[i] == 'z') {
			if (word[i + 1] == '=') {
				i++;
			}
		}

		count++;
	}

	printf("%d", count);
	return 0;
}
