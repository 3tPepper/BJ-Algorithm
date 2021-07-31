//정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;
    int n;  //배열의 크기
    int x;  //찾으려는 수
    scanf_s("%d %d", &n, &x);
    if (n >= 1 && n <= 10000 && x >= 1 && x <= 10000) {
        a = (int*)malloc(sizeof(int) * n);

        for (int i = 0; i < n; i++) {
            scanf_s("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            if (n >= 1 && n <= 10000) {
                if (a[i] < x) {
                    printf("%d ", a[i]);
                }
            }
        }
        free(a);
    }
    return 0;
}
