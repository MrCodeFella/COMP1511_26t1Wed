#include <stdio.h>

#define SIZE_1 3
#define SIZE_2 10

int main(void) {
    double array[SIZE_1] = {1.0, 2.0, 3.0};
    double array2[SIZE_2] = {0.0};

    for (int i = 0; i < SIZE_1; i++) {
        array2[i] = array[i];
    }

    for (int i = 0; i < SIZE_2; i++) {
        printf("%.2lf ", array2[i]);
    }

    printf("\n");

    return 0;
}