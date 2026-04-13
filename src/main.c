#include <stdio.h>
#include <stdlib.h>

#include "array_utils.h"

int main(int argc, char *argv[]) {
    int *values;
    int count;
    int i;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <num1> <num2> ...\n", argv[0]);
        return 1;
    }

    count = argc - 1;
    values = (int *)malloc(sizeof(int) * count);
    if (values == 0) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        values[i] = atoi(argv[i + 1]);
    }

    printf("Sum: %d\n", sum_array(values, count));
    printf("Average: %.2f\n", average_array(values, count));

    free(values);
    return 0;
}
