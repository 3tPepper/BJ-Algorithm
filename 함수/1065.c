#include <stdio.h>

int main(void) {
	int n;
	int arr[4] = { 0, };
	int hansu = 0;

	scanf_s("%d", &n);
	if (n > 1000) return 0;

	while (n != 0) {
		if (n < 100) {
			hansu++;
		}
		else if (n >= 100 && n < 1000) {
			int n_copy = n;
			for (int i = 2; i >= 0; i--) {
				arr[i] = n_copy % 10;
				n_copy /= 10;
			}
			if (arr[0] - arr[1] == arr[1] - arr[2]) {
				hansu++;
			}
		}
		else {
			int n_copy = n;
			for (int i = 3; i >= 0; i--) {
				arr[i] = n_copy % 10;
				n_copy /= 10;
			}
			if (arr[0] - arr[1] == arr[1] - arr[2] && arr[0] - arr[1] == arr[2] - arr[3]) {
				hansu++;
			}
		}
		n--;
	}
	printf("%d", hansu);
  return 0;
}
