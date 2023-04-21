#include<stdio.h>
#define MUL(a,b) (a*b)
int main()
{
    float number1,number2;
    printf("Please enter first number\n");
    scanf("%f",&number1);
    printf("Please enter second number\n");
    scanf("%f",&number2);
    printf("Multiplication of two floating point numbers up to three decimal places\n:%.3f",MUL(number1,number2));
    return 0;
}
