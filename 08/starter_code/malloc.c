#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *my_int = malloc(sizeof(int));
    double *my_double = malloc(sizeof(double));
    char *my_char = malloc(sizeof(char));

    char *my_char_array = malloc(sizeof(char) * 10);

    struct my_struct *pointer_to_struct = malloc(sizeof(struct my_struct));

    free(my_int);
    free(my_double);
    free(my_char);
    free(my_char_array);
    free(pointer_to_struct);

    return 0;
}