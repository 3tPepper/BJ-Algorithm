#include <stdio.h>

int main(void) {
	int arr[9] = { 0 };
	int max=0, count=0;
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &arr[i]);
		if (arr[i] >= 100) { return -1; }
		if (arr[i] > max) 
		{ 
			max = arr[i];
			count = i+1;
		}
	}
	printf("%d\n%d", max, count);
	return 0;

}
