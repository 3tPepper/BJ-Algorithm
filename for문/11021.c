//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void) {
    int t;
    int a, b;
    scanf_s("%d", &t);
    
    for (int i = 1; i <= t; i++) {
        scanf_s("%d %d", &a, &b);
        if (a > 0 && a < 10 && b>0 && b < 10) {
            printf("Case #%d: %d\n", i, a + b);
        }
    }
    return 0;
}
