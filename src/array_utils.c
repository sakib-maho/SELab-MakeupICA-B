#include "array_utils.h"

int sum_array(const int *arr, int count) {
    int i;
    int total = 0;
    for (i = 0; i < count; i++) {
        total += arr[i];
    }
    return total;
}

double average_array(const int *arr, int count) {
    if (count <= 0) {
        return 0.0;
    }
    return (double)sum_array(arr, count) / (double)count;
}
