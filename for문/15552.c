//빠른 A+B
#include <stdio.h>

int main(void) {
    int t;
    int a, b;
    scanf_s("%d", &t);
    if (t <= 1000000) {
        for(int i=0;i<t;i++){
            scanf_s("%d %d", &a, &b);
            if (a >= 1 && a <= 1000 && b >= 1 && b <= 1000) {
                printf("%d\n", a + b);
            }
        }
    }
    return 0;
}
