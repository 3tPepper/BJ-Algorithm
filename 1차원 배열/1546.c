#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	double* score;
	double max = 0.0;
	double avg = 0.0;
	scanf_s("%d", &n);
	if (n > 1000) {
		return 0;
	}
	score = (double*)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++) {
		scanf_s("%lf", &score[i]);
		if (score[i] < 0.0 || score[i] > 100.0) {
			return 0;
		}
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i = 0; i < n; i++) {
		avg += score[i] / max * 100.0;
	}
	avg /= (double)n;
	printf("%.2lf", avg);
	free(score);
	return 0;
}
