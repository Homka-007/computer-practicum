#include <stdio.h>
#include "io_arr.h"
#include "task2.h"

#define SIZE 30

int main() {
    int B[SIZE];

    printf("Task 2\n");
    input_arr(B, SIZE);

    int res = count_div_by_seven(B, SIZE);
    printf("Elements div by 7: %d\n", res);

    return 0;
}