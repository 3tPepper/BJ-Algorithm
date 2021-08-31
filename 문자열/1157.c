#include <stdio.h>
#include <stdlib.h>
char string[1000000];

int main(void) {
	int alphabet[26] = { 0, };
	int max = -1;
	char max_alphabet;
	scanf_s("%s", &string, sizeof(string));
	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == 'A' || string[i] == 'a') {
			alphabet[0] ++;
		}
		else if(string[i] == 'B' || string[i] == 'b') {
			alphabet[1] ++;
		}
		else if(string[i] == 'C' || string[i] == 'c') {
			alphabet[2] ++;
		}
		else if(string[i] == 'D' || string[i] == 'd') {
			alphabet[3] ++;
		}
		else if(string[i] == 'E' || string[i] == 'e') {
			alphabet[4] ++;
		}
		else if (string[i] == 'F' || string[i] == 'f') {
			alphabet[5] ++;
		}
		else if (string[i] == 'G' || string[i] == 'g') {
			alphabet[6] ++;
		}
		else if (string[i] == 'H' || string[i] == 'h') {
			alphabet[7] ++;
		}
		else if (string[i] == 'I' || string[i] == 'i') {
			alphabet[8] ++;
		}
		else if (string[i] == 'J' || string[i] == 'j') {
			alphabet[9] ++;
		}
		else if (string[i] == 'K' || string[i] == 'k') {
			alphabet[10] ++;
		}
		else if (string[i] == 'L' || string[i] == 'l') {
			alphabet[11] ++;
		}
		else if (string[i] == 'M' || string[i] == 'm') {
			alphabet[12] ++;
		}
		else if (string[i] == 'N' || string[i] == 'n') {
			alphabet[13] ++;
		}
		else if (string[i] == 'O' || string[i] == 'o') {
			alphabet[14] ++;
		}
		else if (string[i] == 'P' || string[i] == 'p') {
			alphabet[15] ++;
		}
		else if (string[i] == 'Q' || string[i] == 'q') {
			alphabet[16] ++;
		}
		else if (string[i] == 'R' || string[i] == 'r') {
			alphabet[17] ++;
		}
		else if (string[i] == 'S' || string[i] == 's') {
			alphabet[18] ++;
		}
		else if (string[i] == 'T' || string[i] == 't') {
			alphabet[19] ++;
		}
		else if (string[i] == 'U' || string[i] == 'u') {
			alphabet[20] ++;
		}
		else if (string[i] == 'V' || string[i] == 'v') {
			alphabet[21] ++;
		}
		else if (string[i] == 'W' || string[i] == 'w') {
			alphabet[22] ++;
		}
		else if (string[i] == 'X' || string[i] == 'x') {
			alphabet[23] ++;
		}
		else if (string[i] == 'Y' || string[i] == 'y') {
			alphabet[24] ++;
		}
		else if (string[i] == 'Z' || string[i] == 'z') {
			alphabet[25] ++;
		}
	}
	for (int i = 0; i < sizeof(alphabet)/sizeof(int); i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			max_alphabet = i+65;
		}
	}
	for (int i = 0; i < sizeof(alphabet)/sizeof(int); i++) {
		if (alphabet[i] == max && max_alphabet != i+65) {
			max_alphabet = '?';
		}
	}

	printf("%c", max_alphabet);

	return 0;
}
