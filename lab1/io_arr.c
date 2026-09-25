#include <stdio.h>
#include "io_arr.h"

void input_arr(int arr[], int size) {
    printf("Enter %d ints: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_arr(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}
