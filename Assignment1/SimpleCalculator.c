

#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1;
    int num2;

    int sum;
    int difference;
    int product;
    float quotient;
    int modulus;

    printf("\nEnter the first number (Integer): ");
    scanf("%d",&num1);
    printf("\nEnter the second number (Integer): ");
    scanf("%d",&num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;
    modulus = num1 % num2;

    printf("\n\n  %d + %d = %d \n", num1, num2, sum);
    printf("\n\n  %d - %d = %d \n", num1, num2, difference);
    printf("\n\n  %d * %d = %d \n", num1, num2, product);
    printf("\n\n  %d / %d = %f \n", num1, num2, quotient);
    printf("\n\n  %d %% %d = %d \n", num1, num2, modulus);

    return 0;

}
