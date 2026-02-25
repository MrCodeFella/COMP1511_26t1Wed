// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

int main(void) {
    // PI * r * r
    // 1. Declare the variables
    double pi;
    double radius;

    // 2. Initalise the variables
    pi = 3.14;
    scanf("%lf", &radius);
    
    // 3. Calculate the area of the circle
    double result = pi * radius * radius;
    int number = 1;
    char my_char = 'm';
    // 4. Print the result
    printf("the area is %lf %d %c\n", result, number, my_char);

    return 0;
}
