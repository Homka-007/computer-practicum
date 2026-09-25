#include "task3.h"

int calculate_z(const int arr[], int size, double *res) {
    long long Sn = 0;
    long long S0 = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            Sn += arr[i];
        } else if (arr[i] < 0) {
            S0 += arr[i];
        }
    }

    if (Sn - S0 == 0) {
        return 0;
    }

    *res = (double)(Sn + S0) / (double)(Sn - S0);
    return 1;
}