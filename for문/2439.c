//별찍기2

#include <stdio.h>

int main(void) {
    int n;
    scanf_s("%d", &n);
    if (n >= 1 && n <= 100) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n-i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
