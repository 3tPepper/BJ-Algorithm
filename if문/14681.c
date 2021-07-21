//첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 
//다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)
//점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.

#include <stdio.h>

int main(void) {
	int x = 0, y = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x >= -1000 && x <= 1000 && y >= -1000 && y <= 1000) {
		if (x * y > 0) { //x,y 부호가 같으면
			if (x > 0) {	//부호가 양수면
				printf("%d", 1);
			}
			else {	//부호가 음수면
				printf("%d", 3);
			}
		}
		else if (x * y < 0) {	//x,y 부호가 다르면
			if (x > 0) {	//x가 양수면
				printf("%d", 4);
			}
			else {	//x가 음수면
				printf("%d", 2);
			}
		}
	}
	return 0;
}
