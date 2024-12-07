#include <stdio.h>

int main() {
    float a, b, sum;

    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);

    sum = a + b;

    printf("The sum of %.2f and %.2f is %.2f\n", a, b, sum);

    return 0;
}