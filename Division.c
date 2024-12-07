#include <stdio.h>

int main(){
    float A, B;
    printf("Please insert the two numbers you want to divide:\n");
    scanf("%f\n", &A);
    scanf("%f\n", &B);
float div = A / B;
    printf("%.2f", div);
return 0;
}