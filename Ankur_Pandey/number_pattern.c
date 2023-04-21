#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Please enter any number\n");
    scanf("%d",&n);
    // This is outer loop
    for(i=n;i>=1;i--)  //i=5:5>=1;4 
    {
    // inner loop    
        for(j=i;j>=1;j--)  //j=4;4>=1;3
        {
            printf("%d",j);
        }
    printf("\n"); //for next line
    }
    return 0;
}
