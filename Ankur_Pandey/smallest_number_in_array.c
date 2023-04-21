#include <stdio.h>
int main()
{
    int digit[10],i,min;
    printf("Please enter the numbers\n");
    //to store the numbers 10 time using loop
    for(i=0;i<=9;i++)
    {
        scanf("%d",&digit[i]);
    }
    // assign the value which is at 0 index to min 
    min=digit[0];
    //again use loop for iteartion 
    for(i=1;i<=9;i++)
    {
//use condition to check min have greater value,if have update,in every iteration 
        if(min>digit[i])
        {
            min=digit[i];
        }
    }
    printf("Minimum value of the array is %d",min);
    return 0;
}
