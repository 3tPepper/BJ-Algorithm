//일어나야 하는 시간보다 45분 일찍 울리도록 알람시계 맞추기

#include <stdio.h>

int main(void) {
	int h = 0, m = 0;
	int resultH = 0, resultM = 0;

	scanf_s("%d %d", &h, &m);

	if (h >= 0 && h <= 23 && m >= 0 && m <= 59) {
		if (m < 45) {
			if (h - 1 < 0) {
				resultH = 23;
			}
			else resultH = h - 1;
			resultM = m + 60 - 45;
		}
		else {
			resultH = h;
			resultM = m - 45;
		}
		printf("%d %d", resultH, resultM);
	}
	return 0;
}
