#include <stdio.h>

int main() {
    float a, b, difference;
    
    printf("Enter the first number (a): ");
    scanf("%f", &a);
    printf("Enter the second number (b): ");
    scanf("%f", &b);

    difference = a - b;

    printf("The difference of %.2f and %.2f is %.2f\n", a, b, difference);

    return 0;
}