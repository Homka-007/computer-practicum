#include <stdio.h>

int main(void) {
    int K;
    printf("Enter K: ");
    scanf("%d", &K);
    printf("Rectangles with area %d:\n", K);
    for (int a = 1; a*a <= K; a++) {
        if (K % a == 0) {
            int b = K / a;
            printf("%d * %d", a, b);
        }
    }

    return 0;
}