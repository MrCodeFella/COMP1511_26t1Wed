// part1_arrays.c, odd_only
//
// Written by Conrad (z5478184)
// on 11/03/2026
//
// This program adds 1 to any even element in an array and after prints 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};

    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++ß;
    }


    // int j = 0;
    // while (j < SIZE) {
    //     printf("%d ", array[j]);
    //     j++;
    // }

    for (int j = 0; j < SIZE; j++) {
        printf("%d ", array[j]);
    }

    printf("\n");

    return 0;
}
