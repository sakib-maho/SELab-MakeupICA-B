#include <stdio.h>

#include "array_utils.h"

int main(void) {
    int input[] = {1, 3, 5, 7};
    int sum = sum_array(input, 4);
    double avg = average_array(input, 4);

    if (sum != 16) {
        printf("FAIL: expected sum 16, got %d\n", sum);
        return 1;
    }
    if (avg < 3.999 || avg > 4.001) {
        printf("FAIL: expected avg 4.00, got %.2f\n", avg);
        return 1;
    }

    printf("All tests passed.\n");
    return 0;
}
