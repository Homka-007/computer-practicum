#include <stdio.h>
#include "io_array.h"
#include "task3.h"

#define SIZE 70

int main() {
    int A[SIZE];

    printf("Task 3\n", SIZE);
    input_array(A, SIZE);

    double z;
    if (calculate_z(A, SIZE, &z)) {
        printf("Result Z = %.5f\n", z);
    } else {
        printf("Error: div by zero\n");
    }

    return 0;
}