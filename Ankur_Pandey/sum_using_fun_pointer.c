#include <stdio.h>
int add(int *num1, int *num2,int *result)
{
     *result=*num1+*num2;
}
int main(){
    int a,b,sum;
    printf("Please enter two numbers\n");
    scanf("%d%d",&a,&b);
    add(&a,&b,&sum);
    printf("The sum is: %d",sum);
    return 0;
}
