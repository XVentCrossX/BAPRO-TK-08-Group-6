#include <stdio.h>

int main(){
    float A, B;
    printf("Please insert the two numbers you want to multiply:\n");
    scanf("%f\n", &A);
    scanf("%f\n", &B);

float mul = A * B;
    printf("%.2f", mul);
return 0;
}