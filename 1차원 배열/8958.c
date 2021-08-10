#include <stdio.h>

int main(void) {
	int n;
	char answer[81];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%s", &answer, 81);
		int j = 0;
		int score = 0;
		int count = 0;
		while (answer[j] != NULL) {
			if (answer[j] == 'O') 
			{ 
				count++;
				score += count;
			}
			else 
			{ 
				count = 0;
			}
			j++;
		}
		printf("%d\n", score);
	}
}
