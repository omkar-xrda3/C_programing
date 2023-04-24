#include <stdio.h>

int main()  {
    int num1,num2,temp;
    printf("enter the value of num1=");
    scanf("%d",&num1);
    printf("enter the value of num2=");
    scanf("%d",&num2);
    
    printf("before num1=%d num2=%d\n",num1, num2);
    temp=num1;
    num1=num2;
    num2=temp;
    
    printf("after num1=%d num2=%d\n",num1, num2);
    return 0;
}

