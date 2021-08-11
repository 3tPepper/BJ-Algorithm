#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c;


	scanf_s("%d", &c);
	for (int i = 0; i < c; i++) {
		int n;
		int* score;
		double avg = 0.0;
		double percent = 0.0;

		scanf_s("%d", &n);
		if (n < 1 || n>1000) {
			return 0;
		}
		score = (int*)malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &score[j]);
			if (score[j] < 0 || score[j]>100) {
				return 0;
			}
			avg += (double)score[j];
		}
		avg /= (double)n;
		for (int k = 0; k < n; k++) {
			if (score[k] > avg) {
				percent++;
			}
		}
		percent = (percent/(double)n) * 100.0;
		printf("%.3lf%%\n", percent);
		free(score);
	}
	return 0;
}
