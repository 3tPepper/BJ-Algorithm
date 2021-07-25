//첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
//1부터 n까지 합을 출력한다.

#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;
    scanf_s("%d", &n);
    if (n >= 1 && n <= 10000) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("%d", sum);
    }
    return 0;
}
