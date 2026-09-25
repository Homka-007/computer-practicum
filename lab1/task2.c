#include "task2.h"

int count_div_by_seven(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 7 == 0) {
            count++;
        }
    }
    return count;
}