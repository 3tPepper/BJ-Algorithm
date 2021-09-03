#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9 };
	char word[16] = "";
	int time = 0;
	scanf_s("%s", &word, sizeof(word));
	if (strlen(word) < 2 || strlen(word) > 15) return 0;

	for (int i = 0; word[i] != '\0'; i++) {

		time += arr[word[i] - 'A'] + 1;
	}
	printf("%d", time);
	return 0;
}
