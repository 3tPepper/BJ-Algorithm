//자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void) {
    int n;
    scanf_s("%d", &n);
    if (n <= 100000) {
        for (int i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
