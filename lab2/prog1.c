#include <stdio.h>

int main() {
    int X, Y;
    long long sum = 0;
    printf("Enter X and Y: ");
    scanf("%d %d", &X, &Y);

    for (int i = X; i <= Y; i++) {
        if (i % 2 == 0) {
            long long cube = (long long) i*i*i;
            sum += cube;
        }
    }

    printf("Sum of cubes = %lld\n", sum);
}