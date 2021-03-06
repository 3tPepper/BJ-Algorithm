//0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 다음과 같은 연산을 할 수 있다. 
//먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다. 
//그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다. 
//N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오. (더하기 사이클)

#include <stdio.h>

int main(void) {
	int n;
	scanf_s("%d", &n);

	int n1=0, n2=0, new_num=n;
	int i=0;
	if (n >= 0 && n <= 99) {
		do {
			n2 = new_num % 10;
			n1 = new_num / 10;
			new_num = n2 * 10 + (n1 + n2)%10;
			i++;
		} while (new_num != n);
		printf("%d", i);
	}
	return 0;
}
