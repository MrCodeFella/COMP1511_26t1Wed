#include <stdio.h>


int main(void) {
    
    int number;
    int number2;
    while (scanf("%d %d", &number, &number2) == 2) {
        if (number % 2 == 0) {
            printf("even %d\n", number);
        }
    }

}